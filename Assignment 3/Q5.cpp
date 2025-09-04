#include<iostream>
#include<stack>
#include<string>
#include<cmath>
using namespace std;

bool isOperator(char c){
    return c=='+'||c=='-'||c=='*'||c=='/'||c=='^';
}

int applyOp(int a, int b, char op){
    switch(op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
        case '^': return pow(a,b);
        default: return 0;
    }
}

bool evaluatePostfix(const string& postfix, int& result){
    stack<int> s;

    for(char c: postfix){
        if(isdigit(c)){
            s.push(c-'0');
        }
        else if(isOperator(c)){
            if(s.size()<2){
                cout<<"Error: Invalid postfix expression\n";
                return false;
            }
            int b=s.top(); s.pop();
            int a=s.top(); s.pop();

            applyOp(a,b,c);
            s.push(applyOp(a,b,c));
        }
        else{
            cout<<"Error: Invalid character in postfix expression\n";
            return false;
        }
    }
    if (s.size()!=1){
        cout<<"Error. Invalid postfix expression\n";
        return false;
    }
    result = s.top();
    return true;
}

int main(){
    string postfix;
    cout<<"Enter a postfix expression(single-digit operands): ";
    cin>>postfix;

    int result;
    if(evaluatePostfix(postfix, result)){
        cout<<"Result: "<<result<<endl;
    }
    else{
        cout<<"Evaluation failed due to invalid expression."<<endl;
    }

    return 0;
}
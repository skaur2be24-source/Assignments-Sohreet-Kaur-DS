#include<iostream>
#include<stack>
using namespace std;

bool isMatching(char open, char close){
    return (open =='(' && close == ')') ||
    (open =='{' && close == '}') ||
    (open =='[' && close == ']');
}

bool isBalanced(string expr){
    stack<char> st;
    for(char c : expr) {
        if(c=='(' || c=='{' || c=='[') st.push(c);
        else if(c==')' || c=='}' || c==']') {
            if(st.empty() || !isMatching(st.top(), c)) return false;
            st.pop();
        }
    }
    return st.empty();
}

int main(){
    string expr;
    cout<<"Enter expression: ";
    cin>>expr;

    if(isBalanced(expr)) cout<<"Balanced\n";
    else cout<<"Not Balanced\n";
    return 0;
}
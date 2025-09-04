#include<iostream>
#include<stack>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    stack<char>st;
    for(char c: s) st.push(c);
    
    cout<<"Reversed: ";
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    cout<<endl;
    return 0;
}
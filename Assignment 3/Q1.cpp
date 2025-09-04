#include<iostream>
#define MAX 100
using namespace std;

int stackArr[MAX];
int top=-1;

bool isEmpty() {return top==-1;}
bool isFull() {return top==MAX-1;}

void push(int x){
    if(isFull()){cout<<"Stack overflow!\n"; return;}
    stackArr[++top]=x;
    cout<<x<<"pushed.\n";
}

void pop(){
    if(isEmpty()){cout<<"Stack underflow!\n"; return;}
    cout<<stackArr[top--]<<"popped.\n";
}

void peek(){
    if(isEmpty()){
        cout<<"Stack is empty.\n"; return;
    }
    cout<<"Top element = "<<stackArr[top]<<endl;
}

void display(){
    if(isEmpty()){
        cout<<"Stack is empty.\n"; return;
    }
    cout<<"Stack (top->bottom): ";
    for(int i=top; i>=0; --i) cout<< stackArr[i]<<" ";
    cout<<endl;
}

int main(){
    int ch, x;
    while(true){
        cout<<"\n1.Push 2.Pop 3.isEmpty 4.isFull 5.Display 6.Peek 7.Exit\nChoice: ";
        cin>>ch;
        switch(ch){
            case 1: cout<<"Enter value: "; cin>>x; push(x); break;
            case 2: pop(); break;
            case 3: cout<< (isEmpty() ? "Yes, empty\n": "No, not empty\n"); break;
            case 4: cout<< (isFull() ? "Yes, full\n": "No, not full\n"); break;
            case 5: display(); break;
            case 6: peek(); break;
            case 7: return 0;
            default: cout<<"Invalid choice!\n";
        }
    }
}
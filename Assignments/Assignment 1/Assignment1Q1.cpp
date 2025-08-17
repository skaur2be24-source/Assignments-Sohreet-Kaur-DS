#include<iostream>
using namespace std;

const int MAX = 100;
int arr[MAX];
int size;

void create() {

    cout<<"enter number of elements: "<<endl;
    cin>>size;

    if(size>MAX){
        cout<<"Size exceeds maximum allowed ("<<MAX<<")"<<endl;
        size=0;
        return;
    }

    cout<<"creating array"<<endl;
    for(int i=0;i<size;i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }
    return;
}

void display() {

    if (size==0){
        cout<<"array is empty"<<endl;
        return;
    }

    cout<<"displaying array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void insert() {
    if(size>=MAX){
        cout<<"Array is full. Cannot insert."<<endl;
        return;
    }

    int pos, val;
    cout<<"enter position to insert (0 to "<< size <<"): "<<endl;
    cin>>pos;

    if(pos<0||pos>size){
        cout<<"Invalid position"<<endl;
        return;
    }
    cout<<"enter value to insert: "<<endl;
    cin>>val;

    for(int i=size; i> pos; i--) {
        arr[i]=arr[i-1];
    }

    arr[pos]=val;
    size++;

    cout<<"element inserted"<<endl;

    return;
}

void deleteElement() {
    if(size==0){
        cout<<"Array is empty. Cannot delete."<<endl;
        return;
    }

    int pos;
    cout<<"enter position of element to be deleted."<<endl;
    cin>>pos;

    if(pos<0||pos>=size){
        cout<<"Invalid Position."<<endl;
        return;
    }

    for(int i=pos; i<size-1; i++){
        arr[i]=arr[i+1];
    }

    size--;

    cout<<"element deleted."<<endl;

    return;
}

void linearSearch() {
    if(size==0){
        cout<<"array is empty"<<endl;
        return;
    }

    int val, found=0;
    cout<<"element value to search: "<<endl;
    cin>>val;

    for(int i=0; i<size; i++){
        if(arr[i]==val){
            cout<<"element found at position: "<< i <<endl;
            found = 1;
            break;
        }
    }

    if(!found){
    cout<<"element not found."<<endl;
    }

}

int main(){

    int opt;

    do{
    cout<<"MENU"<<endl;
    cout<<"1.CREATE"<<endl;
    cout<<"2.DISPLAY"<<endl;
    cout<<"3.INSERT"<<endl;
    cout<<"4.DELETE"<<endl;
    cout<<"5.LINEAR SEARCH"<<endl;
    cout<<"6.EXIT"<<endl;

    cout<<"enter option: "<<endl;
    cin>>opt;

    switch(opt){
        case 1: create(); break;
        case 2: display(); break;
        case 3: insert(); break;
        case 4: deleteElement(); break;
        case 5: linearSearch(); break;
        case 6: cout<<"exiting..."<<endl; break;
        
        default: cout<<"invalid option"<<endl; break;
    }
} while (opt!=6);

    return 0;
}
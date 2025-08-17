#include<iostream>
using namespace std;

int main() {
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int arr[size];

    for(int i=0; i<size; i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }

    for(int i=0; i<size/2; i++){
        int temp;
        temp=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=temp;
    }

    cout<<"reversed array"<<endl;
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
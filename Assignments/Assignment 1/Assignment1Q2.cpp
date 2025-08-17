#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;
    int arr[100];

    cout<<"enter elements"<<endl;
    for(int i=0; i<size; i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                for(int k=j; k<size-1; k++){
                    arr[k]=arr[k+1];
                }
                size--;
                j--;
            }
        }
    }

    cout<<"array after removing dulpicates: ";
    for(int i=0; i<size; i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

    return 0;
}
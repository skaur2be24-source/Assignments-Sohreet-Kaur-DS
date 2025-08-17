#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    return;
}

void sortArray(int* ptr, int size){
    for(int i=0;i<size;i++){
        cout<<"iteration "<<i+1<<":"<<endl;
        for(int j=0;j<size-i-1;j++){
            if(*(ptr+j)>*(ptr+j+1)){
                swap(*(ptr+j),*(ptr+j+1));
            }
        }
        for(int k=0; k<size; k++){
            cout<<*(ptr+k)<<" ";
        }
        cout<<endl;
    }
    cout<<"sorted array"<<endl;
    for(int k=0;k<size;k++){
        cout<<*(ptr+k)<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[]={64,34,25,12,22,11,90};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"bubble sort"<<endl;
    sortArray(arr,size);
    return 0;
}
#include<iostream>
using namespace std;

int linearSearch(int* ptr, int size, int key){
    for(int i=0; i<size; i++){
        if(*(ptr+i)==key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int* ptr, int size, int key){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(*(ptr+i)>*(ptr+j)){
                int temp;
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }

    cout<<"sorted array for binary search"<<endl;
    for(int i=0; i<size; i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

    int low = 0, high = size-1;

    while(low<=high){
        int mid=low+(high-low)/2;

        if(*(ptr+mid)==key){
            return mid;
        }
        else if(*(ptr+mid)<key){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}

int main(){

    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"enter element to be found"<<endl;
    cin>>key;

    int opt;
    cout<<"choose an option:"<<endl;
    cout<<"1.Linear search"<<endl;
    cout<<"2.Binary Search"<<endl;
    cin>>opt;

    int result;

    switch(opt){
        case 1: result=linearSearch(arr,size,key);
        if(result!=-1){
            cout<<"element found at "<<result<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
        break;

        case 2:
        result=binarySearch(arr,size,key);
        if(result!=-1){
        cout<<"element found at "<<result<<endl;
        }
        else{
            cout<<"element not found"<<endl;
        }
        break;

        default: cout<<"invalid option"<<endl;break;
        }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"enter elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count=0;

    for(int i=0; i<n; i++){
        bool isDistinct = true;

    for(int j=0; j<i; j++){
        if (arr[i]==arr[j]) {
            isDistinct = false;
            break;
        }
    }
    if(isDistinct){
        count++;
    }
}

cout<<"total number of distinct elements="<<count<<endl;

    return 0;
}
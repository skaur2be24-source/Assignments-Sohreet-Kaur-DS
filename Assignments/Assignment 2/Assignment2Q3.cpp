#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size of array"<<endl;
    cin>>size;

    cout<<"enter elements in ascending or descending order"<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int sum=0;
    int actualSum=((size+1)*(size+2))/2;
    for(int i=0; i<size;i++){
        sum+=arr[i];
    }

    int missingNum=actualSum-sum;
    cout<<"missing number is "<<missingNum<<endl;

    return 0;
}
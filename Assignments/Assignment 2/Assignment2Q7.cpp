#include<iostream>
using namespace std;

long long mergeAndCount(int arr[], int l, int m, int r){
    long long inv_count=0;
    
    int n1=m-l+1;
    int n2=r-m;

    int left[n1], right[n2];
    for(int i=0; i<n1; i++){
        left[i]=arr[l+i];
    }

    for(int j=0; j<n2; j++){
        right[j]=arr[m+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while(i<n1&&j<n2){
        if(left[i]<=right[j]){
            arr[k++]=left[i++];
        }
        else{
            arr[k++]=right[j++];
            inv_count+=(n1-i);
        }
    }

    while(i<n1){
        arr[k++]=left[i++];
    }

    while(j<n2){
        arr[k++]=right[j++];
    }

    return inv_count;
}

long long mergeSortAndCount(int arr[], int l, int r){
    long long inv_count=0;
    if(l<r){
        int m = (l+r)/2;
        
        inv_count+= mergeSortAndCount(arr,l,m);
        inv_count+=mergeSortAndCount(arr,m+1,r);
        inv_count+=mergeAndCount(arr,l,m,r);
    }
    return inv_count;
}

int main(){
    int n;
    cout<<"enter size of array:"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements of array:"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long result=mergeSortAndCount(arr, 0, n-1);
    cout<<"number of inversions="<<result<<endl;

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    
    int m, n;
    cout<<"enter no. of rows and columns:"<<endl;
    cin>>m>>n;

    int arr[m][n];
    cout<<"enter matrix elements:"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"array"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    bool found=false;

    for(int i=0; i<m; i++){
        int rowMin=arr[i][0], colIndex=0;
        for(int j=1; j<n; j++){
            if(arr[i][j]<rowMin){
                rowMin=arr[i][j];
                colIndex=j;
            }
        }
        bool isSaddle=true;
        for(int k=0; k<m; k++){
            if(arr[k][colIndex]>rowMin){
                isSaddle=false;
                break;
            }
        }
        if(isSaddle){
            cout<<"Saddle point found: "<<rowMin<<" at position ("<<i<<","<<colIndex<<")"<<endl;
            found=true;
        }
    }

    if(!found){
        cout<<"no saddle point found in the matrix."<<endl;
    }

    return 0;
}
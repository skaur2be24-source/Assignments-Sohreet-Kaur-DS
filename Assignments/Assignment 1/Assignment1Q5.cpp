#include<iostream>
using namespace std;

int main() {
    int r, c;
    cout<<"enter rows and columns: ";
    cin>>r>>c;

    int arr[10][10];
    cout<<"enter elements of the matrix: "<<endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>arr[i][j];
        }
    }

    cout<<"\nSum of each row: "<<endl;
    for(int i=0; i<r; i++){
        int rowSum=0;
        for(int j=0; j<c; j++){
            rowSum+=arr[i][j];
        }
        cout<<"Row "<<i+1<<"="<<rowSum<<endl;
    }

    cout<<"\nSum of each column: "<<endl;
    for(int i=0; i<r; i++){
        int colSum=0;
        for(int j=0; j<c; j++){
            colSum+=arr[i][j];
        }
        cout<<"Column "<<i+1<<"="<<colSum<<endl;
    }
    
    return 0;
}
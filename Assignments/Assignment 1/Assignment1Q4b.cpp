#include<iostream>
using namespace std;

int main() {
    int m,p,n;
    cout<<"enter rows and columns of first matrix: ";
    cin>>m>>p;
    int p2;
    cout<<"enter rows and columns of second matrix: ";
    cin>>p2>>n;

    if(p!=p2){
        cout<<"matrix multiplication not possible."<<endl;
        return 0;
    }

    int A[10][10], B[10][10], C[10][10]={0};

    cout<<"enter elements of first matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<p; j++){
            cin>>A[i][j];
        }
    }

    for(int i=0; i<p; i++){
        for(int j=0; j<n; j++){
            cin>>B[i][j];
        }
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<p; k++){
                C[i][j]+= A[i][k]*B[k][j];
            }
        }
    }

    cout<<"resultant matrix"<<endl;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;

int n;

void diagonalMatrix(){

    int diag[n]={0};

    cout<<"enter diagonal elements"<<endl;
    for(int i=0; i<n; i++){
        cin>>diag[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<diag[i]<<" ";
            }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
    return;
}

void tridiagonalMatrix(){
    
    int tri[3*n-2]={0};

    cout<<"enter lower diagonal elements"<<endl;
    for(int i=0;i<n-1;i++){
        cin>>tri[i];
    }
    cout<<endl;

    cout<<"enter main diagonal elements"<<endl;
    for(int i=n-1;i<2*n-1;i++){
        cin>>tri[i];
    }

    cout<<"enter upper diagonal elements"<<endl;
    for(int i=2*n-1;i<3*n-2;i++){
        cin>>tri[i];
    }

    int k=0;
    for(int i=0; i<n; i++){
        if(i==0||i==1){
            cout<<tri[k]<<" ";
            k++;
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<endl;

    for(int i=1; i<n-1; i++){
        for(int j=0; j<n; j++){
            if(j>=i-1&&j<=i+1){
                cout<<tri[k]<<" ";
                k++;
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        if(i==n-2||i==n-1){
            cout<<tri[k]<<" ";
            k++;
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<endl;

    return;
}

void lowerdiagonalMatrix(){
    
    int mat[(n*(n+1))/2]={0};

    cout<<"enter non-zero elements"<<endl;
    for(int i=0; i<(n*(n+1))/2; i++){
        cin>>mat[i];
    }

    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<mat[k]<<" ";
            k++;
        }
        for(int j=0;j<n-i-1;j++){
            cout<<"0 ";
        }
            cout<<endl;
        }

    return;
}

void upperdiagonalMatrix(){
    
    int mat[(n*(n+1))/2]={0};

    cout<<"enter non-zero elements"<<endl;
    for(int i=0; i<(n*(n+1))/2; i++){
        cin>>mat[i];
    }

    int k=0;

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<"0 ";
        }
        for(int j=n-1;j>i-1;j--){
            cout<<mat[k]<<" ";
            k++;
        }
            cout<<endl;
        }

    return;
}

void symmetricMatrix(){
       
    int mat[(n*(n+1))/2]={0};
    
    int k=0;
    cout<<"enter elements of lower half"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cin>>mat[k++];
        }
    }
    
    cout<<"Symmetric matrix:"<<endl;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i>=j){
                    cout<<mat[(i*(i+1))/2+j]<<" ";
                }
                else{
                    cout<<mat[(j*(j+1))/2+i]<<" ";
                }
            }
            cout<<endl;
        }

    return;
}

int main(){

    cout<<"enter size of square matrix: "<<endl;
    cin>>n;

    int choice;
    cout<<"enter choice"<<endl;
    cout<<"1.Diagonal Matrix"<<endl;
    cout<<"2.Tridiagonal Matrix"<<endl;
    cout<<"3.Lower Diagonal Matrix"<<endl;
    cout<<"4.Upper Diagonal Matrix"<<endl;
    cout<<"5.Symmetric Matrix"<<endl;
    cin>>choice;

    switch(choice){
        case 1: diagonalMatrix(); break;
        case 2: tridiagonalMatrix(); break;
        case 3: lowerdiagonalMatrix(); break;
        case 4: upperdiagonalMatrix(); break;
        case 5: symmetricMatrix(); break;
        default:cout<<"invalid option"<<endl; break;
    }

    return 0;
}
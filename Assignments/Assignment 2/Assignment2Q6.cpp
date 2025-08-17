#include<iostream>
using namespace std;

//struct
struct Element {
    int row, col, val;
};

//read matrix
void readMatrix(struct Element M[]){
    cout<<"enter rows, columns and no. of non-zero elements:"<<endl;
    cin>>M[0].row>>M[0].col>>M[0].val;

    cout<<"enter row, col, value for each non-zero element:"<<endl;
    for(int i=1; i<=M[0].val; i++){
        cout<<"enter for value "<<i<<endl;
        cin>>M[i].row>>M[i].col>>M[i].val;
    }
    return;
}

//display matrix
void displayElement(Element M[]){
    cout<<"Row\tCol\tVal\n";
    for(int i=0; i<=M[0].val; i++){
        cout<<M[i].row<<"\t"<<M[i].col<<"\t"<<M[i].val<<"\n";
    }
    return;
}

//transpose of matrix
void transpose(Element A[], Element B[]){
    B[0].row=A[0].col;
    B[0].col=A[0].row;
    B[0].val=A[0].val;

int k=1;
for(int i=0; i<A[0].col; i++){
    for(int j=1; j<=A[0].val; j++){
        if(A[j].col==i){
            B[k].row=A[j].col;
            B[k].col=A[j].row;
            B[k].val=A[j].val;
            k++;
        }
    }
}
return;
}

void addElement(Element A[], Element B[], Element C[]){
    if(A[0].row!=B[0].row||A[0].col!=B[0].col){
        cout<<"Matrices cannot be added."<<endl;
        C[0].val=0;
        return;
    }

    int i=1; 
    int j=1; 
    int k=1;
    C[0].row=A[0].row;
    C[0].col=A[0].col;

    while(i<=A[0].val&&j<=B[0].val){
        if(A[i].row<B[j].row||(A[i].row==B[j].row && A[i].col<B[j].col)){
            C[k++]=A[i++];
        }
        else if(B[j].row<A[i].row||(B[j].row==A[i].row && B[j].col<A[i].col)){
            C[k++]=B[j++];
        }
        else{
            C[k]=A[i];
            C[k++].val=A[i++].val+B[j++].val;
        }
    }

    while(i<=A[0].val){
        C[k++]=A[i++];
    }

    while(j<=B[0].val){
        C[k++]=B[j++];
    }

    C[0].val=k-1;

    return;
}

void multiplyElement(Element A[], Element B[], Element C[]){
    if(A[0].col!=B[0].row){
        cout<<"Matrices cannot be multiplied"<<endl;
        C[0].val=0;
        return;
    }

    int k=1;
    C[0].row=A[0].row;
    C[0].col=B[0].col;

    for(int i=1; i<=A[0].val; i++){
        for(int j=1; j<=B[0].val; j++){
            if(A[i].col==B[j].row){
                int row=A[i].row;
                int col=B[j].col;
                int val=A[i].val*B[j].val;
                bool found=false;

                for(int x=1; x<k; x++){
                    if(C[x].row==row && C[x].col==col){
                        C[x].val+=val;
                        found=true;
                        break;
                    }
                }

                if(!found){
                    C[k].row=row;
                    C[k].col=col;
                    C[k].val=val;
                    k++;
                }
            }
        }
    }
    C[0].val=k-1;

    return;
}

int main(){
    struct Element A[50], B[50], C[100];

    cout<<"enter first sparse matrix"<<endl;
    readMatrix(A);

    cout<<"enter second sparse matrix"<<endl;
    readMatrix(B);

    cout<<"Matrix A:"<<endl;
    displayElement(A);

    cout<<"Matrix B:"<<endl;
    displayElement(B);

    transpose(A, C);
    cout<<"transpose of A"<<endl;
    displayElement(C);

    addElement(A,B,C);
    cout<<"A + B"<<endl;
    displayElement(C);

    multiplyElement(A,B,C);
    cout<<"A * B"<<endl;
    displayElement(C);

    return 0;
}
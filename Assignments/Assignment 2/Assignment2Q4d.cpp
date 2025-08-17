#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of strings: ";
    cin>>n;
    cin.ignore();

    char str[50][50];

    cout<<"enter strings: "<<endl;
    for(int i=0; i<n; i++){
        cin.getline(str[i], 50);
    }

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(str[i], str[j])>0){
                char temp[50];
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }
    cout<<endl;

    cout<<"strings in alphabetical order:"<<endl;
    for(int i=0; i<n; i++){
        cout<<str[i]<<endl;
    }

    return 0;
}
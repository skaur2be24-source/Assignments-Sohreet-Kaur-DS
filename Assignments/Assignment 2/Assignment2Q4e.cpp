#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[100];

    cout<<"enter a string in uppercase"<<endl;
    cin.getline(str, 100);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }

    cout<<"string in lowercase: "<< str <<endl;
    return 0;

}
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str1[100], str2[50];

    cout<<"enter first string: ";
    cin.getline(str1, 100);

    cout<<"enter second string: ";
    cin.getline(str2, 50);
    
    strcat(str1, str2);

    cout<<"concatenated string: "<<str1<<endl;

    return 0;
}
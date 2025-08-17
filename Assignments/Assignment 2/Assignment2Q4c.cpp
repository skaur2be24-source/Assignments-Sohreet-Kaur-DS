#include<iostream>
#include<cstring>
using namespace std;

bool isVowel(char ch){
    ch=tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}

int main(){
    char str[100], result[100];
    int j=0;
    
    cout<<"enter string: ";
    cin.getline(str, 100);

    for(int i=0; str[i]!='\0';i++){
        if(!isVowel(str[i])){
            result[j++]=str[i];
        }
    }
    result[j]='\0';

    cout<<"string without vowels: "<< result <<endl;

    return 0;
}
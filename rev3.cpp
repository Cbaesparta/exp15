//SAI SANKAR
//23070123112
//ENTC B2

#include<iostream>
#include<string.h>
using namespace std;
void reverse(char *str){
    if(*str){
        reverse(str+1);
        cout<<("%c",*str);
    }
}
int main(){
    char a[50];
    cout<<"enter a string";
    cin>>a;
    reverse(a);
    return 0;
}

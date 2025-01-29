#include<iostream>
using namespace std;
int main(){
    char s;
    cin>>s;
    if(s>64 && s<90 || s>96 && s<122){
        if(s>64 && s<90){
            cout<<"Upper Case";
        }
        else{
            cout<<"Lower Case";
        }
    }
    else{
        cout<<"Not an Alphabet";
    }
}
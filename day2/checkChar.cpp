#include<iostream>
using namespace std;

int main(){
    char s;
    cin>>s;
    s=tolower(s);
    int n=s;
   if(n>96 && n<122){ 
    if(s=='a' || s=='e' || s=='i' || s=='o' || s=='u'){
        cout<<"Vowel";
    }
    else{
        cout<<"Consonant";
    }
   }
   else{
    cout<<"Not an Alphabet";
   }
}
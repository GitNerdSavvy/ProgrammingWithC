#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int num=n;
    int res=0,temp;
    while(n>0){
         temp=n%10;
         res=res*10 +temp;
        n/=10;
    }
    
    if(num==res){
        cout<<"Palindrome Number";
    }
    else{
        cout<<"Not Palindrome";
    }
}
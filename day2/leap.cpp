#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<"Leap year";
            }
            else{
                cout<<"Not Leap Year";
            }
        }
        else{
            cout<<"Leap Year";
        }
    }
    else{
       cout<<"Not Leap Year"; 
    }
}
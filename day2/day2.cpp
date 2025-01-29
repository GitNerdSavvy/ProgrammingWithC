#include<iostream>
using namespace std;
int large(int a,int b,int c){
    return a>b?(a>c?a:c):(b>c?b:c);
}
int main(){
    // int n;
    // cin>>n;
    // if(n>0){
    //     cout<<"Positive";
    // }
    // else if(n<0){
    //     cout<<"Negative";
    // }
    // else{
    //     cout<<"Zero";
    // }
    // cout<<endl;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<large(a,b,c);
    return 0;
}
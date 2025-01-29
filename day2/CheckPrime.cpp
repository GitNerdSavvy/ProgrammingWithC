#include<iostream>
using namespace std;
int prime(int n){
    if(n==0 || n==1) return 0;
     
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            return 0;
        }
        
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
   if(prime(n)==1){
    cout<<"Prime Num";
   }
   else{
    cout<<"Not Prime";
   }

return 0;
}
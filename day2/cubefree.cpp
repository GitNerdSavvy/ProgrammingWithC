#include<iostream>
#include<math.h>
using namespace std;

int isCube(int n){
    for(int i=2;i<=cbrt(n);i++){
        if(n%(i*i*i)==0){
            return 0;
        }
    }
    return 1;
}

void find(int n){
    for(int i=1;i<=cbrt(n);i++){
        int a3=i*i*i;
        if(n%a3==0){
            int b=n/a3;
            if(isCube(b)){
                cout<<"a:"<<i<<" b:"<<b;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    find(n);
}
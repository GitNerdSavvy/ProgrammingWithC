#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=n;i>=0;i--){
    for(int space=0;space<=n-i;space++){
        cout<<"  ";
    }
   
    for(int j=0;j<2*i+1;j++){
            if(i==0 || j==0 || i==n || j==2*i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
    }
    cout<<endl;
   }

    return 0;
}
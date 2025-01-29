#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
   for(int i=0;i<n;i++){
    for(int space=0;space<=n-i;space++){
        cout<<" ";
    }
    int c=1;
    for(int j=0;j<2*i+1;j++){
            if(j<(2*i+1)/2){
                cout<<c++;
            }
            else{
                cout<<c--;
            }
    }
    cout<<endl;
   }

    return 0;
}
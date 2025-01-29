#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
        for(int l=0;l<n-i-1;l++){
             cout<<"  ";
        }
        cout<<endl;
        cout<<endl;

    }
    for(int i=2*n-1;i>0;i--){
        for(int j=0;j<2*i;j++){
            cout<<"  ";
        }
        for(int k=0;k<n-i;k++){
            cout<<"* ";
        }
        for(int l=0;l<n-i-1;l++){
             cout<<"  ";
        }
        cout<<endl;
        cout<<endl;

    }
    // for(int i=n-2;i>=0;i--){
    //     for(int j=0;j<i;j++){
    //         cout<<"  ";
    //     }
    //     for(int k=0;k<n-i;k++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //     cout<<endl;

    // }




    return 0;
}
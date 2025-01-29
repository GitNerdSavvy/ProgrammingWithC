#include<iostream>
using namespace std;
int main(){
    int ch;
    cout<<"Enter a choice between 1 and 4"<<endl;
    cin>>ch;
    int m;
    switch (ch)
    {
    case 1:
        cout<<"Enter in Kg:";
        cin>>m;
        cout<<1000*m<<"gm";
        break;
    case 2:
         cout<<"Enter in gm:";
        cin>>m;
        cout<<m/1000<<"kg";
        break;
    case 3:
         cout<<"Enter in Km:";
        cin>>m;
        cout<<m*1000<<"m";
        break;
    case 4:
         cout<<"Enter in m:";
        cin>>m;
        cout<<m/1000<<"km";
        break;
    default:
        cout<<"Invalid Choice";
        break;
    }



}
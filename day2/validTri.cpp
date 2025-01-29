#include <iostream>
using namespace std;
int validbySide(int a,int b,int c){
    if(a>0 && b>0 && c>0){
        if (a + b > c || b + c > a || c + a > b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    }
    else{
        return 0;

    }
}
int main()
{
    // int a, b, c;
    // cout << "Enter angles of triangle" << endl;
    // cin >> a >> b >> c;
    // if (a>0 && b>0 && c>0 && a + b + c == 180)
    // {
    //     cout << "Valid Triangle";
    // }
    // else
    // {
    //     cout << "Not Valid Traingle";
    // }
    int a, b, c;
    cin >> a >> b >> c;
    if(validbySide(a,b,c)){
        cout<<"Valid Triangle";
    }
    else{
        cout<<"Not Valid";
    }
}
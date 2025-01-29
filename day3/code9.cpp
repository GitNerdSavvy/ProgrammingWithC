#include <iostream>
using namespace std;
int countdig(int n)
{
  
    if(n==0 || n==1) return 1;
    
    return 1+countdig(n/10);
}

int main(){
    int n;
    cin>>n;

    cout<<countdig(n);
}
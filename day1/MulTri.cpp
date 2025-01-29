#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
   for (int c = 0; c < n; c++) {
    	
        for (int i = 0; i < n; i++) {
        	for(int b=0;b<n*c;b++)
        	{
        		cout<<" ";
        	}
            for (int j = 0; j <= i; j++) {
               cout<<"*";
            }
            cout<<endl;
        }
        
    }
       

    
}
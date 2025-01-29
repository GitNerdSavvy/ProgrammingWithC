#include<iostream>
using namespace std;
int binaryS(int *arr,int l,int n,int h){
       if(l>h){
        return -1;
       }
        int mid=(l+h)/2;
        if(arr[mid]<n){
           return binaryS(arr,mid+1,n,h);
        }
        else if(arr[mid]>n){
            return binaryS(arr,l,n,mid-1);
           
        }
        else {
                return mid;
        }
       

        
}
int main(){
    int arr[]={1,2,5,7,8,9,10,70};
    int l=sizeof(arr)/sizeof(arr[0]);

    int n;
    cin>>n;

   cout<<binaryS(arr,0,n,l-1);

}
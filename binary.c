#include<stdio.h>
// wap to search an element in 1d arraY

int bin(int arr[],int low,int high,int k){
	while(low<=high){
		int mid=low +(high-low)/2;
		
		if(arr[mid]==k) return mid;
		
		if(arr[mid]>k){
			 return bin(arr,low,mid-1,k);
		}
		
		else{
			return bin(arr,mid+1,high,k);
		}
	}
	return -1;
}
int main(){
        int arr[10]={12,23,35,44,54,67,78,80,93,102};
        int k=44;
       
		int res=bin(arr,0,10,k);
		if(res==-1){
			printf("Number %d is not present",k);
		}else{
			printf("Number %d is present on index %d",k,res);
		}
        
    return 0;
}

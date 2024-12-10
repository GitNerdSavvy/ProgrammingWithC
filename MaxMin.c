#include<stdio.h>

int main(){
	int a[]={1,4,5,6,78,9,5,78,65};
	int n=sizeof(a)/sizeof(a[0]);
	int min=a[3];
	int max=0;
	
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
		else if(a[i]>max){
			max=a[i];
		}
	}
	printf("Size of array: %d\n",n);
	printf("Max element=%d and Min element=%d",max,min);
	
return 0;	
}

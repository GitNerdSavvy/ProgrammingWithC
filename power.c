#include<stdio.h>
int power(int n){
	if(n==0) return 1;
	return 2*power(n-1);
}
int main(){
	
	int num;
	printf("Enter a Num:");
	scanf("%d",&num);
	int res=power(num);
	printf("%d",res);
	
	
	
	
	return 0;
}

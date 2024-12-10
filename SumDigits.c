//to find the sum of digits of number
//to reverse a number
//to calculate power of a number
#include<stdio.h>
int main(){
	int n;
	int sum=0;
	scanf("%d",&n);
	while(n){
		sum=sum+n%10;
		//printf("%d\n",sum);
		n/=10;
	}
	printf("%d",sum);
}

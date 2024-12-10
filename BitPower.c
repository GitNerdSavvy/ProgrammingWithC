#include<stdio.h>
int main(){
	int n;
	printf("Enter a Number:");
	scanf("%d",&n);
	int c=-1;
	while(n){
	    n=n>>1;
		c++;
	}
	printf("%d",c);
}

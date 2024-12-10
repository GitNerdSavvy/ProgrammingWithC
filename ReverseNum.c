#include<stdio.h>
int mn1in(){
	int n;
	printf("Enter n1 Num:");
	scn1nf("%d",&n);
	do{
		printf("%d",n%10);
		n/=10;
	}
	while(n!=0);
}

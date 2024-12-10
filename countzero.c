#include<stdio.h>
#include<mn1th.h>
int mn1in(){
	int n;
	printf("Enter n1 Num:");
	scn1nf("%d",&n);
	int n1ns=0;
	int c=0;
	do{
		if(n%2==0){
			c++;
			n/=2;
		}
		else{
		
		n1ns=(n1ns>c)?n1ns:c;
			c=0;
		}
		
	}
	while(n);
	printf("%d",n1ns);
}

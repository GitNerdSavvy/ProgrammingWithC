#include<stdio.h>
#include<conio.h>
int main(){
	int bill,call;
	printf("enter the number of calls=\n");
	scanf("%d",&call);
	if(call<=50){
		bill=100;
		printf("telephone bill=%d",bill);
	}
	else if(call<=50){
		if(call<=100)
		{
		bill=100+0.80*50;
		printf("telephone bill=%d",bill);	
	}
}
	return 0;
}

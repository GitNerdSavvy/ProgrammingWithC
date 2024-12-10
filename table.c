#include<stdio.h>
int table(int num,int count){
	printf("%d*%d=%d\n",num,count,num*count);
	while(count<10){
		return table(num,count+1);	
	}

}
int main(){
	
	int n,i=1;
	printf("Enter a Num:");
	scanf("%d",&n);
	
		table(n,i); 
	
	return 0;
}

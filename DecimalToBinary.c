#include<stdio.h>
int DectoBin(int num){
		if(num==0) return 0;
		
	return DectoBin(num/2);
		printf("%d",num%2);

}
int main(){
	int n;
	printf("Enter a Decimal Number:");
	scanf("%d",&n);
	DectoBin(n);
	
	
	
	
	return 0;
}

#include<stdio.h>
int main(){
    int sum=0;
    int n;
    printf("Enter the Num:");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        sum=sum+(i*i*i);
    }
    printf("Sum=%d",sum);
    return 0;
}
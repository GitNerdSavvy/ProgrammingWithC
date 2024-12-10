#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the numberr of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    ( a>b && a>c) ? printf("a is greater") : 
    (b>c && b>a) ? printf("b is greater"):
    printf("c is greater"); 
}
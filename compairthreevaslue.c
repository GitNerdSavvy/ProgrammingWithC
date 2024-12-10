#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the numberr of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    ( a>b && a>c) ? printf("a is greater") : 
    (b>c && b>a) ? printf("b is greater"):
    printf("c is greater"); 



    int d,e,f;
    printf("enter the number ");
    scanf("%d%d%d",&d,&e,&f);
    if(a>b && a>c)
    printf("a is the");
else if (b<a && b>c)
{
    printf("b is the greater");

}
else {
    printf("c is greater");
}

int n,fact=0;
printf("enter the number ");
scanf("%d",&n);
for(int i=1;i>=n;i++){
    fact=fact*i;
    i++;
    printf("the fact is the",i);
}



}
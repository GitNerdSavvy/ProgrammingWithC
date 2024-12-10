#include<stdio.h>
int main(){
   int a=5;
   int b=6;
   int c;
   c=b;
   b=a;
    a=c;
    printf("Swapped Number:");
    printf("%d %d",a, b);
return 0;

}

#include<stdio.h>
int main(){
int a;
printf("Enter a:");
scanf("%d",&a);
int b;
printf("Enter b:");
scanf("%d",&b);
int c;
printf("Enter c:");
scanf("%d",&c);
if(a>b&& a>c){
    printf("%d",a);
}else if(b>a &&b>c){
  printf("%d",b);
}
else if(c>a && c>b){
      printf("%d",c);
}else{
        printf("All Number Are Equal");
}
return 0;

}

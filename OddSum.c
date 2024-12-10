#include<stdio.h>
void main(){

    int ans=0;
    int n;
    scanf("%d",&n);
   for(int i=1;i<=n;i++){
        if(i&1==1) {
          ans=  ans+i;
          printf("%d\n",ans);
        }
    }
    printf("Odd Sum=%d",ans);
}
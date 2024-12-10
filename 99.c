#include<stdio.h>
int main(){
        int n=2;

        int sm=9;
        int ans=9;

       while(n--){
            sm=sm*11;
            ans=ans+sm;
        }

        printf("%d",ans);


    return 0;
}
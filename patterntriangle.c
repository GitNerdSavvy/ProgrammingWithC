#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        // space
        for(int j=1;j<=n-i;j++){
            printf(" ");


        }
        // star
 for(int j=1;j<=2*n-1;j++){
            printf("*");


        }
        // space
         for(int j=1;j<=n-i;j++){
            printf(" ");


        }

    }
    
    
    
    
    return 0;
}
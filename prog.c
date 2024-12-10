#include<stdio.h>
#include<conio.h>
int main(){
    int income,tax;
    printf("enter income=");
    scanf("%d",&income);
    if(income<=100000){
        tax=0;
        printf("tax=%d\n",tax);
    }
    else if(income>=100001&&income<=150000){
        tax=income*10/100;
        printf("tax=%d\n",tax);
    }
    else if(income>=150001&&income<=250000){
        tax=income*20/100+5000;
         printf("tax=%d\n",tax);
    }
    else if(income>=250000){
         tax=income*30/100+25000;
         printf("tax=%d\n",tax);
    }
    return 0;
}

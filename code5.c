/*print the  electricity bill of a customer the customer id, name, and unit consumed by the
user should be captured from the keyboard to display amount to be payed by the customer if the bill exceed
450 rupees then 15% charge of the total bill and the min bill of a customer should be 100 */


#include<stdio.h>
int main(){

int c_id;
printf("Enter c_id:");
scanf("%d",&c_id);


char *c_name;
printf("Enter c_name:");
scanf("%s",&c_name);


int c_unit;
printf("Enter c_unit:");
scanf("%d",&c_unit);

int total_amt;
if(total_amt<200){
    total_amt=c_unit*1.2;
     printf("Total Bill:");
    printf("%d",total_amt);
}
else if(total_amt>=200 && total_amt<400 ){
    total_amt=c_unit*1.5;
    printf("Total Bill:");
    printf("%d",total_amt);
}
else if(total_amt>=400 && total_amt<600 ){
    total_amt=c_unit*1.8;
    printf("Total Bill:");
    printf("%d",total_amt);
}
else{
        total_amt=c_unit*2;
     printf("Total Bill:");
    printf("%d",total_amt);
}


return 0;



}


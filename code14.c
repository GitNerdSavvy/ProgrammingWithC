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

int total_amt=c_unit*5;
if(total_amt>100 &&total_amt<450){

     printf("Total Bill:");
    printf("%d",total_amt);
}
else if(total_amt>450){
    total_amt=115*total_amt/100;
    printf("Total Bill:");
    printf("%d",total_amt);
}
else{
     printf("Total Bill:");
    printf("%d",total_amt);
}


return 0;



}

/*write a program to find the eligibility of admission for a course based on following criteria:
/*1.maths>=65
/*physics >=55 chem>=50 total marks>=180 or total marks in maths & physics >=140 */

#include<stdio.h>
int main(){
int maths;
printf("Enter maths:");
scanf("%d",&maths);
int physics;
printf("Enter physics:");
scanf("%d",&physics);
int chem;
printf("Enter chem:");
scanf("%d",&chem);

if(maths>=65 && physics>=55 && chem>=50){
        printf("Eligible");

}else if(physics+maths+chem>=180 || maths+physics>=140){
         printf("Eligible");
}else{
 printf("Not Eligible");
}

return 0;



}

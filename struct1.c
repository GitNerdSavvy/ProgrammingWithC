#include<stdio.h>
struct student{
    char name[20];
    int age;
    int Roll_no;
};
int main(){
    struct student s1={"John Doe",24,24150};

    printf("\nName:%s\n Age:%d\n Roll Number:%d\n",s1.name,s1.age,s1.Roll_no);    



    return 0;
}
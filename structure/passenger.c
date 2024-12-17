#include<stdio.h>
#include <string.h>
struct passenger{
    char name[100];
    int age;
    int sitNum;
    char class[20];
};
int main(){
    struct passenger pass;

    strcpy(pass.name, "Sachin Tendulkar");
    pass.age = 42;
    pass.sitNum = 100;
    strcpy(pass.class, "Business");
    
    printf("Name:%s\nAge=%d\nSitNumber:%d\nTravel Class=%s",pass.name,pass.age,pass.sitNum,pass.class);



    return 0;
}
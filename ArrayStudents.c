#include <stdio.h>
struct student
{
    char name[20];
    int age;
    int Roll_no;
} st[10];
int main()
{

    for (int i = 0; i < 2; i++)
    {
        printf("Name:");
        scanf("%s", st[i].name);
        printf("Age:");
        scanf("%s", &st[i].age);
        printf("Roll Number:");
        scanf("%s", &st[i].Roll_no);
    }
    printf("Students List\n");
    for (int i = 0; i < 2; i++)
    {
        printf("\nName:%s\n Age:%d\n Roll Number:%d\n", st[i].name, st[i].age, st[i].Roll_no);
    }

    return 0;
}
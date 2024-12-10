#include <stdio.h>
struct Employee
{
    char *name;
    int id;
    char *department;
    char *salary;
};

 int main()
{

    struct Employee emp1 = {"John Doe", 001, "Tech Lead", "$40k"};
     printf("\n Name:%s\n Id:%d\n Department:%s\n Salary:%s\n",emp1.name,emp1.id,emp1.department,emp1.salary);
    return 0;
}
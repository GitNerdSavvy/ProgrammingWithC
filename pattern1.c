#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Rows and Column:");
    scanf("%d", &n);
    for (int i = n; i >= 1; i--)
    {

        for (int j = 1; j <=n - i; j++)
        {

            printf("_");
        }
        for (int k = 1; k<= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}
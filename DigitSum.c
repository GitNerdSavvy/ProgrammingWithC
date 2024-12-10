#include <stdio.h>
int sumDigit(int n)
{
    if(n==0) return 0;
    return n + sumDigit(n - 1);
}
int main()
{
    int n,result;
    printf("Enter a Num:");
    scanf("%d", &n);

   result= sumDigit(n);
	printf("%d",result);
    return 0;
}

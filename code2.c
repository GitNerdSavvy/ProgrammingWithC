// WAP to check the weather conditions via given temperature

#include <stdio.h>

int main()
{
    int temp;
    printf("Enter the temperature in degree Celsius: ");
    scanf("%d", &temp);

    if (temp < 0)
    {
        printf("Freezing Weather");
    }
    else if(temp > 0 && temp <= 10)
    {
        printf("Very Cold Weather");
    }
    else if (temp > 10 && temp <= 20)
    {
        printf("Cold Weather");
    }
    else if (temp > 20 && temp <= 30)
    {
        printf("Normal Weather");
    }
    else if (temp > 30 && temp <= 40)
    {
        printf("Hot Weather");
    }
    else if (temp > 40 && temp <= 50)
    {
        printf("Very Hot Weather");
    }
    else
    {
        printf("Extremely Hot Weather");
    }

    return 0;
}
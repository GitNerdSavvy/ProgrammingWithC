// WAP to check vowel or consonant

#include <stdio.h>

int main()
{
    char choice;
    printf("Choose an alphabet:");
    scanf("%s", &choice);

    if (choice == 'a' || choice == 'e' || choice == 'i' || choice == 'o' || choice == 'u')
    {

        printf("You have choosen a Vowel😎");
    }
    else
    {
        printf("You have choosen a Consonant😎");
    }

    return 0;
}
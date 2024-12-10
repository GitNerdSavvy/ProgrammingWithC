// WAP to calculate profit and loss on an item


#include <stdio.h>
int main()
{
    int cp, sp;

    printf("Enter the Cost Price and Selling Price of Item:");
    scanf("%d%d", &cp, &sp);
    if (cp > sp)
    {
        int loss = cp - sp;
        printf("Loss is: %d", loss);
    }
    else if (sp > cp)
    {
        int gain = sp - cp;
        printf("Profit is: %d", gain);
    }
    else
    {
        printf("No Profit No Loss");
    }

    return 0;
}
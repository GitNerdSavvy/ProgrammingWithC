// WAP to implement switch case to print are of different geometrical figures

#include <stdio.h>

int main()
{
    int choice;
    printf("Enter your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
    {
        printf("You have chosen Circle\n");
        int r;
        printf("Enter the radius of the circle: ");
        scanf("%d", &r);
        printf("Area of Circle = 3.14 * r * r\n");

    }break;
    case 2:
    {
        printf("You have chosen Rectangle\n");
        int l, b;
        printf("Enter the Length and Width of the Rectangle: ");
        scanf("%d", &l, &b);

        printf("Area of Rectangle=l*b\n");
    }break;
    case 3:
    {

        printf("You have chosen Triangle\n");
        int h, b;
        printf("Enter the Base and Height of the Triangle: ");
        scanf("%d", &b, &h);

        printf("Area of Triangle=h*b/2\n");
    }break;
    case 4:
    {
        printf("You have chosen Square\n");
        int s;
        printf("Enter the Side of the Square: ");
        scanf("%d", &s);

        printf("Area of Square=s*s\n");
    }break;
    default:
    {
        printf("Invalid Choice:");
    }

        return 0;
    }
}
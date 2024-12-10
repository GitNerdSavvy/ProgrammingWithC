#include <stdio.h>
#include <math.h>
int main()
{
    // Square
    int side_of_square = 5;

    // Rectangle
    int length = 6;
    int width = 9;


    // Triangle
    int base = 5;
    int height = 5;

    // Circle
    int radius = 6;



    // Perimeter of Square
    int perimeter_square = 4 * side_of_square;
    printf("Perimeter of Square:");
    printf("%d",perimeter_square);

    // Area of Square
    int area_square=side_of_square*side_of_square;
    printf("\nArea of Square:");
    printf("%d",area_square);


    // Perimeter of Rectangle
    int perimeter_rectangle = 2 * (length + width);
    printf("\nPerimeter of Rectangle:");
    printf("%d",perimeter_rectangle);

    // Area of Rectangle
    int area_rectangle = length * width;
    printf("\nArea of Rectangle:");
    printf("%d",area_rectangle);



    // Perimeter of Triangle
    int perimeter_triangle = base + base + (int)sqrt((base * base) + (
        height * height));
        printf("\nPerimeter of Triangle:");
        printf("%d",perimeter_triangle);


        // Area of Triangle
        int area_triangle = (base * height) / 2;
        printf("\nArea of Triangle:");
        printf("%d",area_triangle);



        // Circumference of Circle
        int circumference_circle = 2 * 3.14 * radius;
        printf("\nCircumference of Circle:");
        printf("%d",circumference_circle);


        // Area of Circle
        int area_circle = 3.14 * radius * radius;
        printf("\nArea of Circle:");
        printf("%d",area_circle);\


        return -1;


        
       
    
}
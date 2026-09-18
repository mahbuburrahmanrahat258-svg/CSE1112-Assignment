#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter length and width: ");
    scanf("%f %f", &length,&width);


    perimeter =2*(length+width);

    printf("Area of Rectangle = %.2f",perimeter);

    return 0;
}

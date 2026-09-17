#include <stdio.h>

int main()
{
    float num1, num2, divide;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

   divide  = num1 / num2;

    printf("Division = %.2f", divide);

    return 0;
}

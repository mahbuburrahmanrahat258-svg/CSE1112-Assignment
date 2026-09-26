#include <stdio.h>
int main()
{
    float a, b;
    char operator;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    switch (operator)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            printf("Result = %.2f", a / b);
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}

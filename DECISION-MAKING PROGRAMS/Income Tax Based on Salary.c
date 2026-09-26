#include <stdio.h>
int main()
{
    float salary, tax;

    printf("Enter salary: ");
    scanf("%f", &salary);

    if (salary <= 30000)
        tax = 0;
    else if (salary <= 50000)
        tax = salary * 0.05;
    else if (salary <= 100000)
        tax = salary * 0.10;
    else
        tax = salary * 0.15;

    printf("Income Tax = %.2f", tax);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a, i;
    // principal, rate, time, amount, interest;

    printf("Enter p, r, and t: ");
    scanf("%f %f %f", &p, &r, &t);

    a = p * pow((1 + r / 100), t);
    i = a - p;

    printf("Compound Interest = %.2f", i);

    return 0;
}

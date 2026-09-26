#include <stdio.h>
int main()
{
    float a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
        printf("Largest = %f", a);
    else if (b > c && b > d)
        printf("Largest = %f", b);
    else if (c > d)
        printf("Largest = %f", c);
    else
        printf("Largest = %f", d);

    return 0;
}

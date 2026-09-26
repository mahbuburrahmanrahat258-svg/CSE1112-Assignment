#include <stdio.h>
int main()
{
    float a, b, c, d;

    printf("Enter four numbers: ");
    scanf("%f %f %f %f", &a, &b, &c, &d);

    if (a < b && a < c && a < d)
        printf("smallest = %f", a);
    else if (b < c && b < d)
        printf("smallest = %f", b);
    else if (c < d)
        printf("smallest = %f", c);
    else
        printf("smallest = %f", d);

    return 0;
}


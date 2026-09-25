#include<stdio.h>
int main()
{
    float a,b,c;
    printf ("Enter three number: ");
    scanf ("%f %f %f",&a,&b,&c);

    if (a>b && a>c)
        printf ("Largest = %f",a );
    else if (b>c)
        printf ("Largest = %f",b );
    else
        printf ("Largest = %f",c );
    return 0;
}

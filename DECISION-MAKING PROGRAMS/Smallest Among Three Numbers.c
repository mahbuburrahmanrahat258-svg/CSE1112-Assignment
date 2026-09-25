#include<stdio.h>
int main()
{
    float a,b,c;
    printf ("Enter three number: ");
    scanf ("%f %f %f",&a,&b,&c);

    if (a<b && a<c)
        printf ("smallest = %f",a );
    else if (b<c)
        printf ("smallest = %f",b );
    else
        printf ("smallest = %f",c );

    return 0;
}


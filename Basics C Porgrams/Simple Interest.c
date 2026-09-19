#include<stdio.h>
int main()
{
    float p,r,t,i;
    //p=principle,r=rate,t=time,i=interest;
    printf ("Enter the value p,r and t: ");
    scanf ("%f %f %f",&p,&r,&t);

    i=(p*r*t)/100;

    printf ("Simple Interest= %.2f",i);

    return 0;
}

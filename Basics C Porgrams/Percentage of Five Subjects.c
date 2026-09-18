#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,percentage;

    printf("Enter marks of five subjects: ");
    scanf ("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);

    percentage=(s1+s2+s3+s4+s5)/5;

    printf("Percentage= %.2f%%",percentage);

    return 0;
}

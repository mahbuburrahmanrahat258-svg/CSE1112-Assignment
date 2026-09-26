#include <stdio.h>
int main()
{
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 80)
        printf("Eligible for admission");
    else
        printf("Not eligible for admission");

    return 0;
}

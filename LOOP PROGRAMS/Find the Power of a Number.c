#include <stdio.h>
int main()
{
    int b, p, result = 1, i;
    //b=base,p=power;
    scanf("%d %d", &b,&p);

    for(i = 1; i <= p; i++)
    {
        result = result * b;
    }

    printf("Result = %d", result);

    return 0;
}

#include <stdio.h>
int main()
{
    long long num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%lld", &num);

    while(num!= 0)
    {
        num = num / 10;
        count++;
    }
    printf("Number of digits = %d", count);

    return 0;
}

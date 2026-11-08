#include <stdio.h>
int main()
{
    int start, end, n, temp, digit;
    int count, sum, power, i;
    scanf("%d %d", &start, &end);

    for(n = start; n <= end; n++)
    {
        temp = n;
        count = 0;

        while(temp != 0)
        {
            count++;
            temp = temp / 10;
        }

        temp = n;
        sum = 0;

        while(temp != 0)
        {
            digit = temp % 10;
            power = 1;

            for(i = 1; i <= count; i++)
            {
                power = power * digit;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}

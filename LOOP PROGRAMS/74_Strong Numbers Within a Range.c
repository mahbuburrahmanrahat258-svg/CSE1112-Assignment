#include <stdio.h>
int main()
{
    int start, end, n, temp;
    int digit, fact, i, sum;
    scanf("%d %d", &start, &end);

    for(n = start; n <= end; n++)
    {
        temp = n;
        sum = 0;

        do
        {
            digit = temp % 10;
            fact = 1;

            for(i = 1; i <= digit; i++)
            {
                fact = fact * i;
            }

            sum = sum + fact;
            temp = temp / 10;

        } while(temp > 0);

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}

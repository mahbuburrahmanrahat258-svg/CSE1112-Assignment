#include <stdio.h>
int main()
{
    int start, end, n, i, sum;
    scanf("%d %d", &start, &end);

    for(n = start; n <= end; n++)
    {
        sum = 0;

        for(i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum = sum + i;
            }
        }

        if(sum == n)
        {
            printf("%d ", n);
        }
    }

    return 0;
}

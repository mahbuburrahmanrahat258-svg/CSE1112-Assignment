#include <stdio.h>
int main()
{
    int l, s, i, gcd = 1;
    //l=larger,s=small;
    scanf("%d %d", &l, &s);

    for(i = 1; i <= l && i <= s; i++)
    {
        if(l % i == 0 && s % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD = %d", gcd);

    return 0;
}

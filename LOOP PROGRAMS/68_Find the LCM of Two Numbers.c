#include <stdio.h>
int main()
{
    int l, s, i, lcm = 1;
    //l=larger,s=small;
    scanf("%d %d", &l, &s);

    for(i = 1; i <= l && i <= s; i++)
    {
        if(l % i == 0 && s % i == 0)
        {
          lcm =(l*s)/ i;
        }
    }
    printf("LCM = %d", lcm);
    return 0;
}

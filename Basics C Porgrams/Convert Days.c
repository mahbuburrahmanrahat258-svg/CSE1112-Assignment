#include <stdio.h>
int main()
{
    int tD, y, m, d;
    //tD=totalDays,y=years,m=months,d=days;

    printf("Enter td=: ");
    scanf("%d", &tD);

    y = tD / 365;
    tD = tD % 365;

    m = tD / 30;
    d = tD % 30;

    printf("Years = %d\n", y);
    printf("Months = %d\n", m);
    printf("Days = %d", d);

    return 0;
}

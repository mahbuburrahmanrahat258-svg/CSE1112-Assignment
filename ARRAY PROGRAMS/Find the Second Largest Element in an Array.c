#include <stdio.h>
int main()
{
    int a[100], n, i;
    int max1, max2, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max1 = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
            found = 1;
        }
        else if(a[i] < max1)
        {
            if(found == 0 || a[i] > max2)
            {
                max2 = a[i];
                found = 1;
            }
        }
    }

    if(found == 1)
    {
        printf("Second largest = %d", max2);
    }
    else
    {
        printf("Second largest does not exist");
    }

    return 0;
}

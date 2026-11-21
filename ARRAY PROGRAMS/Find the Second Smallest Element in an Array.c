#include <stdio.h>
int main()
{
    int a[100], n, i;
    int min1, min2, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min1 = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min1)
        {
            min2 = min1;
            min1 = a[i];
            found = 1;
        }
        else if(a[i] > min1)
        {
            if(found == 0 || a[i] < min2)
            {
                min2 = a[i];
                found = 1;
            }
        }
    }

    if(found == 1)
    {
        printf("Second smallest = %d", min2);
    }
    else
    {
        printf("Second smallest does not exist");
    }

    return 0;
}

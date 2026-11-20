#include <stdio.h>
int main()
{
    int a[100], n, i, j, found;
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++)
    {
        found = 0;

        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            for(j = i + 1; j < n; j++)
            {
                if(a[i] == a[j])
                {
                    printf("%d ", a[i]);
                    break;
                }
            }
        }
    }

    return 0;
}

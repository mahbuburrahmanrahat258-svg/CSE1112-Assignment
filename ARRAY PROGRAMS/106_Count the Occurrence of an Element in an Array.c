#include <stdio.h>
int main()
{
    int a[100], n, i, search, count = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            count++;
        }
    }

    printf("Occurrence = %d", count);

    return 0;
}

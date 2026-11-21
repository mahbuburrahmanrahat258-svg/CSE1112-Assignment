#include <stdio.h>
int main()
{
    int a[100], n, i, search, found = 0;

    printf("Enter array size: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &search);

    for(i = n - 1; i >= 0; i--)
    {
        if(a[i] == search)
        {
            printf("Last occurrence at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}

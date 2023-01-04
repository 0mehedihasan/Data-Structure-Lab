#include <stdio.h>
int main()
{
    int a[10], i, item,n;
    printf("Enter number of elements of an array: ");
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        printf("Enter elements NO %d:",i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);

    for (i=0; i<=9; i++)
        if (item == a[i])
        {
            printf("YES");
            break;
        }
        if (i > 9)
        {
            printf("NO");
        }

    return 0;
}

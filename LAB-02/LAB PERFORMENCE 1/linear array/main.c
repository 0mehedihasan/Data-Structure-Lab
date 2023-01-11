#include <stdio.h>
int linearsearch(int a[],int item,int n)
{
    for (int i=0; i<=n; i++)
    {
        if (item == a[i])
        {
            return 2;
            break;
        }
    }
    return 0;
}
int main()
{
    int i,item,n;
    printf("Enter number of elements of an array: ");
    scanf("%d",&n);
    int a[n];
    for (i=0; i<n; i++)
    {
        printf("Enter elements NO %d:",i+1);
        scanf("%d", &a[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);
    int p=linearsearch(a,item,n);
    if(p==0)
    {
        printf("\tNO");
    }
    else
    {
        printf("\t YES");
    }

    return 0;
}

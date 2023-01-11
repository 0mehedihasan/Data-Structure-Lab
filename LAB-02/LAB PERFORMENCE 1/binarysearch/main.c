#include <stdio.h>
#include <stdlib.h>
int binarysearch(int arr[],int low,int high,int item)
{
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==item)
        {
            return 2;
        }
        else if(arr[mid]<item)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return 0;
}
int main()
{
    int i, item,n;
    printf("Enter number of elements of an array: ");
    scanf("%d",&n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        printf("Enter elements NO %d:",i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter item to search: ");
    scanf("%d", &item);

    int p=binarysearch(arr,0,n-1,item);

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

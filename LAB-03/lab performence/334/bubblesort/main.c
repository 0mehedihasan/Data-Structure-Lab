#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[],int s)
{
     for(int i=0;i<s;i++)
     {
          for(int j=0;j<(s-1-i);j++)
          {
          if(arr[j]>arr[j+1])
          {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
          }
          }
     }
}
int main()
{ int s;
printf("enter size=");
scanf("%d",&s);
int arr[s];
for(int i=0;i<s;i++)
{
     scanf("%d",&arr[i]);
}
bubblesort(arr,s);
for(int i=0;i<s;i++)
{
     printf("%d",arr[i]);
}
    return 0;
}

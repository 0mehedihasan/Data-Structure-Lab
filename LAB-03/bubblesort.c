#include<stdio.h>
void bubblesort(int arr[],int size)
{
for(int i=0;i<size-1;i++)
{
for(int j=0;j<size-1-i;j++)
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
{
int arr[]={1,3,4,2,5};
int size=5;
bubblesort(arr,size);

for(int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
    return 0;
}
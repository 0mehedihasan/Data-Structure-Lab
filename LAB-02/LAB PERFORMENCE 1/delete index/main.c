#include<stdio.h>

int main()
{
int size,i=0;
printf("Enter size of an array:");
scanf("%d",&size);
int ar[size];
for(int k=0;k<size;k++)
{
    printf("Array index:[%d]=",k);
    scanf("%d",&ar[k]);
}
int a,v;
printf("Enter delete index no:");
scanf("%d",&a);
for(i=0;i<size;i++)
{
printf("\tarray[%d]=%d\n",i,ar[i]);
}
printf("After Deleting:\n");
for(i=a;i<size-1;i++)
{
ar[i]=ar[i+1];
}
size--;

for(i=0;i<size;i++)
{
printf("\tarray[%d]=%d\n",i,ar[i]);
}
    return 0;
}

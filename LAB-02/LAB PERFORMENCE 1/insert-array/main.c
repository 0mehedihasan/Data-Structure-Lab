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
printf("Enter index no:");
scanf("%d",&a);
printf("Enter Index inserting value:");
scanf("%d",&v);
for(i=0;i<size;i++)
{
printf("\tarray[%d]=%d\n",i,ar[i]);
}
printf("After Inserting:\n");
for(i=size-1;i>=a;i--)
{
ar[i+1]=ar[i];
}
ar[a]=v;
size++;

for(i=0;i<size;i++)
{
printf("\tarray[%d]=%d\n",i,ar[i]);
}
    return 0;
}

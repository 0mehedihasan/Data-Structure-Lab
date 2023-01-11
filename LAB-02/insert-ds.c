#include<stdio.h>

int main()
{
int ar[10]={8,2,9,5,1,6,7,20};
int size=9,i=0;
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
#include<stdio.h>

int main()
{
int ar[10]={8,2,9,5,1,6,7,20};
int size=9,i=0;
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
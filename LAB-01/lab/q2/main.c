#include<stdio.h>
int large(int a[],int n)
{
    int i;
    int max=a[0];
    for(i=1; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}
int main()
{

    int a[100];
    int p;
    printf("length of array=");
    scanf("%d",&p);

    for(int i = 0; i < p; ++i)
    {
        printf("array no:%d\t=",i+1);
        scanf("%d",&a[i]);
    }

   // int n=sizeof(a)/sizeof(a[0]);
    int s=large(a,p);
    printf("largest number:%d",s);
    return 0;
}

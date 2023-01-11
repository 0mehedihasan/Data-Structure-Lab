#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b=0;
    printf("Enter row:");
    scanf("%d",&a);
    for(int i=1; i<=a;i++)
    {
        if(i>10)//when digit became 2 or more we need more spaces for it.
        {
            b+=2*(i-1);
        }
        else
        {
        b+=i-1;//digit 1 so it will be increase space upto 9
        }
        for(int j=1;j<=i;j++)//rows working here
        {
            printf("\n");

        for(int k=1;k<=b;k++)//space is increasing from b
        {
            printf(" ");
        }
        for(int l=1;l<=i;l++)//here number will increase as i.
        {
            printf("%d",i);
        }
        }
    }
    return 0;
}

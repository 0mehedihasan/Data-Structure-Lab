#include<stdio.h>
int main()
{
    int i,j,k;
    int row;
    printf("Enter row=");
    scanf("%d",&row);
    for(i = 1; i<=row; i++)
    {
        for(j = i; j<row; j++)
        {
            printf(" ");
        }
        for(k = 1; k<(i*2); k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }

    return 0;
}

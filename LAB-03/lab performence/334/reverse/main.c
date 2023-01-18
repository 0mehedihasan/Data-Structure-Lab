#include <stdio.h>
#include <stdlib.h>
void reverse(char str[],char str2[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        i++;
    }
    for(j=0;i>0;i--,j++)
    {
         str2[j]=str[i-1];
    }
}
int main()
{
    int s;
    printf("enter size=");
    scanf("%d",&s);
    char arr[s],arr2[s];

    fflush(stdin);
    gets(arr);

    printf("string 1=%s\n",arr);
    reverse(arr,arr2);
    printf("string 1=%s\n",arr2);
    return 0;
}

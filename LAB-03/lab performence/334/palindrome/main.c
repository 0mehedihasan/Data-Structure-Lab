#include <stdio.h>
#include <stdlib.h>
void palindrome(char str[],char str2[])
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
     while(str[i]!='\0'){
    if(str[i]==str2[i])
    {
         printf("yes\n");
         break;
    }
    else
    {
         printf("no");
         break;
    }
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
    palindrome(arr,arr2);

    return 0;
}

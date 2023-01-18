#include <stdio.h>
#include <stdlib.h>
void concat(char str[],char str2[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        i++;
    }
    while(str2[j]!='\0')
    {
        str[i+j]=str2[j];
        j++;
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
    fflush(stdin);
    gets(arr2);
concat(arr,arr2);
printf("%s\n",arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
int word(char arr[])
{
     int s=strlen(arr);
     int i=0,w=0;
    for(i=0;i<s;i++)
    {
         if(arr[i]==' '&&arr[i+1]!=' ')
         {
              w++;
         }
    }
    return w;
}
int main()
{
    int s;
    printf("enter size=");
    scanf("%d",&s);

    char arr[s];
    fflush(stdin);
    gets(arr);
    int p=word(arr);
    printf("%d",p);

    return 0;
}

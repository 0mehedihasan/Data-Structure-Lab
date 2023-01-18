#include <stdio.h>
#include <stdlib.h>
int compare(char str[],char str2[],int m,int n)
{
     int i=0;
     if(m==n)
     {
          while(str[i]!='\0')
          {
               if(str[i]==str2[i])
               {
                    return 2;
               }
               i++;
          }
     }
      return 0;
}
int main()
{
     int s,p;
    printf("enter first array size=");
    scanf("%d",&s);
    char arr[s],arr2[s];
    fflush(stdin);
    gets(arr);
    printf("enter second array size=");
    scanf("%d",&p);
    fflush(stdin);
    gets(arr2);
    int x=compare(arr,arr2,s,p);
    if(x==0)
    {
         printf("not matched");
    }
    else
    {
        printf("matched");
    }
    return 0;
}

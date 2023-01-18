#include <stdio.h>
#include <stdlib.h>
void copy(char str[],char str2[])
{
     printf("string 1=%s\n",str);
     int i=0;
     while(str[i]!='\0')
     {
          str2[i]=str[i];
          i++;
     }
     str2[i]='\0';
printf("string 2=");
     puts(str2);
}
int main()
{
int s;
printf("enter size=");
scanf("%d",&s);

char arr[s],arr2[s];
fflush(stdin);
gets(arr);
copy(arr,arr2);

    return 0;
}

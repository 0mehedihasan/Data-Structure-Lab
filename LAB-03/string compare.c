#include<stdio.h>
int compare(char str[],char str2[],m,n)
{
int i=0;
if(m==n){
while(m--)
{
if(str[i]==str2[i])
{
return 1;
}
i++;
return 0;
}
}
}
int main()
{
int m;
printf("Enter First array size=");
scanf("%d",&m);
char string[m];
for(int i=0;i<m;i++)
{
scanf("%c",&string[i]);
}

int n;
printf("Enter First array size=");
scanf("%d",&n);
char string1[n];
for(int i=0;i<n;i++)
{
printf("array[%d]",i+1);
scanf("%c",&string1[i]);
}
int p=compare(string,string1,m,n);
printf("%d",p);

    return 0;
}
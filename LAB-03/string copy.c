#include<stdio.h>
void copy(char string[],char string1[],int m){
while(m--)
{
string1[m]=string[m];
}
}
int main()
{
int m;
printf("Enter First arra size=");
scanf("%d",&m);
char string[m];
for(int i=0;i<m;i++)
{
printf("array[%d]",i+1);
scanf("%c",&string[i]);
}
char string1[m];
copy(string,string1,m);

for(int i=0;i<m;i++)
{
printf("array[%c]",string1[i]);
}

    return 0;
}
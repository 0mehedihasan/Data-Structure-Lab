#include<stdio.h>
int p(char s[],char s1[],s2,r)
{
int max=s2-r+1;
int pos,i,k,l;
if(s>=r){
for(k=1;k<=max;k++)
{
pos=0;
for(l=1;l<=r&&pos==0;l++)
{
if(s1[l]==s[k+l-1])
{
pos=1;
}
}
if(pos==0){ 
return k; 
}
}
}
return 0;
}

int main()
{
char s[5]={"abcde"};
char s1[2]={"cd"};
int a=5,b=2;
int x=p(s,s1,a,b);
if(x==0){
printf("Not Matched");
}
else
{
printf("found :%d",x);
}
    
    return 0;
}
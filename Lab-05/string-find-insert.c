#include<stdio.h>
#include<string.h>
int indexfind(char T[], char P[],int len1, int len2)
{
    int index=-1,flag=1;
    for(int i=0; i<len1; i++)
    {
        if(flag==0)
        {
            break;
        }
        for(int j=0; j<len2; j++)
        {
            if(T[i+j]!=P[j])
            {
                break;
            }
            if(j==len2-1)
            {
                index=i;
                flag=0;
                break;
 
            }
        }
    }
    return index;
}
void stringinsert(char T[],char P[],char N[],int len1, int len2, int len3)
{
int loc=indexfind(T,P,len1,len2);
    for(int i=len1; i>=loc; i--)
    {
        T[i+len3]=T[i];
    }
 
    for(int i=0; i<len3; i++)
    {
        T[i+loc]=N[i];
    }
    T[len1+len3]='\0';
}
int main(){
char T[1000];
char P[1000];
char N[1000];
printf("Enter Text: ");
gets(T);
printf("Enter the sub string to find: ");
gets(P);
printf("New string to Insert:");
gets(N);
int l1=strlen(T);
int l2=strlen(P);
int l3=strlen(N);
stringinsert(T,P,N,l1,l2,l3);
puts(T);
    return 0;
}
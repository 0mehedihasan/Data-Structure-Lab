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

void stringdelete(char T[], char P[], int len1, int len2)
{
int loc=indexfind(T,P,len1,len2);
    for(int i=loc+len2; i<len1; i++)
    {
        T[i-len2]=T[i];
    }
    T[len1-len2]='\0';
}

int main()
{
char T[1000];
char P[1000];
printf("Enter Text: ");
gets(T);
printf("Enter the sub string to find: ");
gets(P);
int l1=strlen(T);
int l2=strlen(P);
stringdelete(T,P,l1,l2);
puts(T);
    return 0;
}
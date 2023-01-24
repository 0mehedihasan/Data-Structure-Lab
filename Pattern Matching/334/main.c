#include<stdio.h>
int pattern_matching(char T[],char P[],int s,int r)
{
    int max=s-r+1;
    int pos,k,l;
    if(s>=r)
    {
        for(k=1; k<=max; k++)
        {
            pos=0;
            for(l=1; l<=r&&pos==0; l++)
            {
                if(P[l]!=T[k+l-1])
                {
                    pos=1;
                }
                else
                {
                    break;
                }
            }
            if(pos==0)
            {
                return k;
            }
        }
    }
    return 0;
}

int main()
{
    int s;
    printf("enter size=");
    scanf("%d",&s);
    char T[s];
    printf("enter string no 1=\t");
    fflush(stdin);
    gets(T);

    int r;
    printf("enter size=");
    scanf("%d",&r);
    char P[r];
    printf("enter string no 2=\t");
    fflush(stdin);
    gets(P);

    int x=pattern_matching(T,P,s,r);

    if(x==0)
    {
        printf("Not Matched");
    }
    else
    {
        printf("found at index :%d",x);
    }

    return 0;
}

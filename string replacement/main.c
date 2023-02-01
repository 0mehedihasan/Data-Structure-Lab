#include <stdio.h>
#include <stdlib.h>
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
    char T[]="aaaaaaaaaaaabbbbaaaabababa";
    char P[]="aab";
    char R[]="tak";
    int t=strlen(T);
    int p=strlen(p);
    int r=strlen(r);

    int check=pattern_matching(T,P,t,p);
    int i=check;
    if(p>r)
    {
        int k=0,differ=p-r;
        while(R[k]!='\0')
        {
            T[i]=R[k];
            i++;
            k++;
        }
        while(T[i]!='\0')
        {
            T[i]=T[i+differ];
            i++;
        }
        T[i]='\0';
    }
    else if(r>p)
    {
        int differ2=r-p,i=t-1;
        while(i>=check)
        {
            T[differ2+i]=T[i];
            i--;
        }
        T[differ2+i]='\0';
    }
    else
    {
        int k=0;
        while(R[k]!='\0')
        {
            T[i]=R[k];
            i++;
            k++;
        }
        T[i]='\0';
    }

    return 0;
}

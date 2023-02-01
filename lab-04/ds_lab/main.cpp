#include <bits/stdc++.h>
using namespace std;


int PMalgorithm(char *T, char *P)
{
    int S = strlen(T);
    int R = strlen(P);
    int k=1, Max = S-R+1;
    while(k<=Max) {
        for(int L=0; L<R; L++) {
            if(P[L]!=T[L+k-1])
                goto label;
        }
        return k-1;
    label:
        k++;
    }
    return -1;
}

char* Replace(char *T, char *P, char *R)
{
    int t=strlen(T);
    int p=strlen(P);
    int r=strlen(R);

    int p_index = PMalgorithm(T, P);
    int i=p_index;
    if(p>r) {
        int k=0, d=p-r;
        while(R[k]!='\0')
            T[i++]=R[k++];
        while(T[i]!='\0') {
            T[i]=T[i+d];
            i++;
        }
        T[i]='\0';
    } else if(r>p) {
        int e = r-p, i=t-1;
        while(i>=p_index) {
            T[i+e] = T[i];
            i--;
        }
        T[t+e]='\0';
        int k=0;
        while(R[k]!='\0')
            T[p_index++] = R[k++];
    } else {
        int k=0;
        while(R[k]!='\0') {
            T[i++]=R[k++];
        }
    }
    return T;
}



int main()
{
    char T[50] = "abababbbaabababa";
    char P[] = "aaba";
    char R[] = "jjkjhkjhjhgj";
    strcpy(T, Replace(T, P, R));
    cout << T << endl;
}

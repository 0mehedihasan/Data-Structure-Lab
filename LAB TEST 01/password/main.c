#include<stdio.h>
#include<string.h>
int pass_chk(char *pass)
{
    int len=strlen(pass);
    if(len<8)
        return -1;
    else
    {
        int i=0, upper=0, lower=0, digit=0, sp=0;
        while(pass[i]!='\0')
        {
            if(pass[i]>='A' && pass[i]<='Z')
                upper=1;
            else if(pass[i]>='a' && pass[i]<='z')
                lower=1;
            else if(pass[i]>='0' && pass[i]<='9')
                digit=1;
            else
                sp=1;
            i++;
        }
        if(upper==0 || lower==0 || digit==0 || sp==0)
            return -1;
        else
            return 0;
    }
}
int main()
{

    char pass[20];
    printf("enter password:\n");
    gets(pass);
    int password=pass_chk(pass);
    if(password==0)
        printf("valid\n");
    else
        printf("invalid");


    return 0;
}

#include <stdio.h>
int len(char s[])
{
    int i=0;
    for ( i = 0; s[i] != '\0'; ++i);
    return i;
}
int main() {
    char s[] = "abc";
    int a=len(s);
    printf("Length of the string: %d",a);
    return 0;
}

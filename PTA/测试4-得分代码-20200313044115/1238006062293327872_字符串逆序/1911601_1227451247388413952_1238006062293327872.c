#include<stdio.h>
int main()
{
    char str[100];
    gets(str);
 
    int i;
    for(i=strlen(str)-1; i>=0; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}


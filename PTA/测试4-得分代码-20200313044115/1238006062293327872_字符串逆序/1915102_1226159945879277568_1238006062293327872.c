#include<stdio.h>
#include<string.h>
int main(void)
{
    char s[81];
    gets(s);
    int len=strlen(s),i;
    for(i=len-1;i>0;i--){
        printf("%c",s[i]);
    }
    printf("%c",s[0]);
    return 0;
}
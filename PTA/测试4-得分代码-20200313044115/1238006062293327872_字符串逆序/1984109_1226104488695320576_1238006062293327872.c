# include<stdio.h>
# include<string.h>

int main()

{
    char s[10000];
    int len;
    gets(s);
    len=strlen(s);
    for(len=len-1;len>=0;len--)
    {
        printf("%c",s[len]);
    }

    return 0;
}

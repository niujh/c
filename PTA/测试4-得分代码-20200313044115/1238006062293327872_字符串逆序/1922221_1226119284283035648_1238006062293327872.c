int main()

{
    char s[1000];
    int len;
    gets(s);
    len=strlen(s);
    for(len=len-1;len>=0;len--){
    printf("%c",s[len]);
    }

    return 0;
}

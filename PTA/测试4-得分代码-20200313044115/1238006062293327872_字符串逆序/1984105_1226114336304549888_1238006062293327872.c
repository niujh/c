#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int m=strlen(a);
    for(int i=m-1;i>=0;i--)
    {
        printf("%c",a[i]);
    }
    return 0;

}
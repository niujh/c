#include<stdio.h>

int main()
{
    int i=0;
    char a[80];
    while((a[i]=getchar())!='\n')
    {
        i++;
    }
    i--;
    for(i;i>=0;i--)
    printf("%c",a[i]);
    return 0;
}
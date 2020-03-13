#include<stdio.h>
int main()
{
    char a[80];
    int i=80;
    do
    {
        scanf("%c",&a[i]);
        i--;
    }
    while(a[i+1]!='\n');
    while(i<=80)
    {
        printf("%c",z[i]);
        i++;
    }
    return 0;
}
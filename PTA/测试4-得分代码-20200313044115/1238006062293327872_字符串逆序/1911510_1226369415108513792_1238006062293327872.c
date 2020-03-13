#include<stdio.h>
int n=80;
int main()
{
    char str[n];
    int x,j;
    int i=-1;
    while(str[i]!='\n')
    {
        i++;
        scanf("%c",&str[i]);
        x=i;
    }
    for(j=x-1;j>=0;j--)
    {
        printf("%c",str[j]);
    }
    return 0;
}

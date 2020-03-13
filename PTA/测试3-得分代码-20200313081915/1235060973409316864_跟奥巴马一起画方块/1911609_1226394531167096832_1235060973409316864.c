#include<stdio.h>
int main()
{
    int n,m,l,u;
    char c;
    scanf("%d %c",&n,&c);
    m = n/2;
    if(n > m*2)
        m += 1;
    for(l = 1;l <= m;l++)
    {
        for(u = 1;u <= n;u++)
            printf("%c",c);
        printf("\n");
    }
}
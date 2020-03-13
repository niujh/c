#include<stdio.h>
int main()
{
    int n,N = 0,x,m,o,p,q,L;
    char s;
    scanf("%d %c",&n,&s);
    x = n;
    while(2*N*N - 1 <= x)
         {
             N++;
         }
    x = -1;
    p = N-1;
    for(;p >= 1;p--,x++)
    {
        o = -1;
        while(o < x)
             {
                 printf(" ");
                 o++;
             }
        m = 2 * p - 1;
        while(m >= 1)
            {
                 printf("%c",s);
                 m = m - 1;
            }
        printf("\n");
    }
    p = N;
    x = N;
    q = 1;
    while(q <= p-2)
    {
        q++;
        x--;
        o = 0;
        while(o < x-2)
             {
                 printf(" ");
                 o++;
             }
        m = 2 * q - 1;
        while(m >= 1)
             {
                 printf("%c",s);
                 m = m - 1;
             }
        printf("\n");
    }
    L = N - 1;
    printf("%d",n - (2*L*L-1));
}
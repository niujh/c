#include<stdio.h>
int main()
{
    int a,b;
    char c;
    float n,s;
    scanf("%d%d %c",&a,&b,&c);
    if (b==90)
    {
        n=6.95;
    }
    if (b==93)
    {
        n=7.44;
    }
    if (b==97)
    {
        n=7.93;
    }
    if (c=='m')
    {
        s=n*a*(1-0.05);
    }
    else
    {
        s=n*a*(1-0.03);
    }
    printf("%.2f",s);
    return 0;

}
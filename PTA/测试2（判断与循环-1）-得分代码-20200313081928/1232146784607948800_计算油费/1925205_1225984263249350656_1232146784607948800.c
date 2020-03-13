#include<stdio.h>

int main()
{
    int l,k;
    char x;
    double b;
    scanf("%d %d %c",&l,&k,&x);
    if(k==90)
    {b=l*6.95;}
    else if(k==93)
    {b=l*7.44;}
    else
    {b=l*7.93;}
    if(x=='m')
    {b=b*0.95;}
    else
    {b=b*0.97;}
    printf("%.2lf",b);
    return 0;
}
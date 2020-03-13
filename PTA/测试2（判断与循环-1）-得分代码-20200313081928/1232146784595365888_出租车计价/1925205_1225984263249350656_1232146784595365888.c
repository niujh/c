#include<stdio.h>

int main()
{
    double s,b1;
    int t,b2,n,sum;
    scanf("%lf %d",&s,&t);
    if(s<=3)
    {b1=10;}
    else if(s<=10)
    {b1=2*s+4;}
    else
    {b1=3*s-6;}
    n=t/5;
    b2=2*n;
    sum=(int)(b1+b2+0.5);
    printf("%d",sum);
    return 0;
}
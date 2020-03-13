
#include<stdio.h>
int main()
{
    int m, b, c;
    double a, n, sum;
    
    scanf("%lf%d",&n,&m);
    if(n<=3)
        a=10;
    else if(n<=10)
        a=10+2*(n-3);
    else
        a=24+(n-10)*3;
    b=m/5*2;
    sum=a+b;
    c=(int)((sum*1)+0.5)/1.0;
    printf("%d",c);
    
    return 0;
}
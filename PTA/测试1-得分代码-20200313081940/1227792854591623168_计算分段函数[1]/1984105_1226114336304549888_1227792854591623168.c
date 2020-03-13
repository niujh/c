#include<stdio.h>
int main()
{
    double m,n;
    scanf("%lf",&m);
    if(m==0.0)
        {
            n=0.0;
        }
    else
        {
            n=1.0/m;
        }
    printf("f(%.1f) = %.1f",m,n);
    return 0;
}
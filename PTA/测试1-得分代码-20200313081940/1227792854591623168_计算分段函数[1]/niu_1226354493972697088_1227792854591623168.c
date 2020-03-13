#include<stdio.h>

int main()
{
    double x, r;
    scanf("%lf", &x);
    if(x==0)
        r = 0;
    else
        r = 1 / x;
    printf("f(%.1f) = %.1f", x, r);
}
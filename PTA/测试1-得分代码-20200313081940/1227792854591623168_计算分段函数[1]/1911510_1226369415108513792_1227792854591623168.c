#include <stdio.h>
int main(void)
{
    double x,f;
    scanf("%lf",&x);
    if (x==0)
        f=0;
    else
        f=1.0/x;
    printf("f(%.1f) = %.1f",x,f);
    return 0;
}
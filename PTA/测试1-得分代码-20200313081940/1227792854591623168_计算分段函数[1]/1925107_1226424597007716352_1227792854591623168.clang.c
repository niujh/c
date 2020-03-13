#include <stdio.h>
#include <stdlib.h>

double f(double a)
{
    double n;
    if(a==0)
    return 0;
    else
        {
        n=1.0/a;
        return n;
    }
}
int main()
{
    double a;
    scanf("%lf",&a);
    double y=f(a);
    printf("f(%.1lf) = %.1lf",a,y);
}

#include <stdio.h>
int main()
{
    double x,result;
    scanf("%lf",&x);
    if (x==0)
       result=0;
    else
       result=1/x;
    printf("f(%.1f) = %.1f\n",x,result);
    return 0;
}
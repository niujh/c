#include<stdio.h>
int main(void)
{
    double eps;
    double s=1;
    double t=1;
    int i;
    scanf("%le",&eps);
    for (i=1;t>eps;i++)
    {
        t=t*i/(2*i+1);
        s=s+t;
    }
    s=s*2;
    printf("PI = %.5f",s);
    return 0;
}
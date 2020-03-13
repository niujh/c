#include<stdio.h>
int main()
{
    double eps=0.0,PI=1.0,a=1.0,b=1.0;
    int i=0;
    scanf("%le", &eps);
    while((a/b)>eps)
    {
        i=i+1;
        a=a*i;
        b=b*(2*i+1);
        PI=PI+(a/b);
    }
    printf("PI = %.5lf",PI*2);
    return 0;
}
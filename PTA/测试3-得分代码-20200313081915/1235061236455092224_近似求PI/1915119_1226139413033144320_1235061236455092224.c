#include<stdio.h>
int main()
{
    double eps,x,PI=1;
    int i=0;
    scanf("%le",&eps);
    x=1;
    while(x>eps)
    {
        i++;
        x=x*i/(i*2+1);
        PI+=x;
    }
    printf("PI = %0.5f",PI*2);
    return 0;
}
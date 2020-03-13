#include<stdio.h>
int main(void)
{
    double p=1,x=1,y=1,eps;
    int i=1;
    scanf("%le", &eps);
    while(x/y>eps){
        x=x*i;
        y=y*(2*i+1);
        p=p+x/y;
        i++;
    }
    printf("PI = %.5f",2*p);
    return 0;
}
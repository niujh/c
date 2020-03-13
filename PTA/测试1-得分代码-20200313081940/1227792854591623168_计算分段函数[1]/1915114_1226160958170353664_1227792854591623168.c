#include<stdio.h>
int main(void)
{
    double x,r;

    scanf("%lf",&x);
    if(x==0){
        r=0;
    }
    else{
        r=1.0/x;
    }
    printf("f(%.1f) = %.1f\n",x,r);
    return 0;
}
#include<stdio.h>
int main(){
    double x,result;
    scanf("%lf",&x);
    result=x==0?0:(1/x);
    printf("f(%.1f) = %.1f",x,result);
    return 0;
}
#include<stdio.h>
int main()
{
    float x,result;
    scanf("%f",&x);
    if(x==0)
    {
        result=0.0;
    }
    else 
    {
        result=1/x;
    }
    printf("f(%.1f) = %.1f\n",x,result);
}
#include<stdio.h>
void main()
{
    float x ,result;
    scanf("%f",&x);
    if(x == 0)result = x;
    else
        result = 1/x;
    printf("f(%.1f) = %.1f",x,result);

}

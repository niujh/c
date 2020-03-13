#include<stdio.h>
int main()
{
    float x,y;
    scanf("%f,&x");
    if(x!=0.0)
    {
        y=1/x;
        printf("f(%.lf)=%.lf",x,y);
    }
    else
    {
        y=0;
        printf("f(%.lf)=%.lf",x,y);
    }
    return 0;
}
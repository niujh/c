#include<stdio.h>
int main(void)
{
    int a,b;
    char c;
    double p;
    scanf("%d %d %c",&a,&b,&c);
        if(b == 90)p = 6.95*a;
        else if(b == 93)p = 7.44*a;
        else p = 1.0*7.93*a;
        if (c == 'm')p = p*0.95;
        else p = p*0.97;
    printf("%.2lf",p);
    return 0;
}
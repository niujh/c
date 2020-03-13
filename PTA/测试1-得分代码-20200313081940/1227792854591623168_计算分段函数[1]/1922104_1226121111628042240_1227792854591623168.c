#include <stdio.h>
int main(void)
{
    float x;
    scanf("%f", &x);
    if(x!=0)
        printf("f(%.1f) = %.1f", x, 1/x);
    else
        printf("f(0.0) = 0.0");
}

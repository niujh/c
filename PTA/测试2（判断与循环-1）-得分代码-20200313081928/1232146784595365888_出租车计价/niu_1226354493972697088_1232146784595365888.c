#include<stdio.h>
#include<math.h>

int main()
{
    float s, m=10;
    int t;
    scanf("%f %d", &s, &t);
    if(s>3)
    {
        m += (s-3) * 2;
    }
    if(s>10)
    {
        m += s - 10;
    }
    m += ((int)(t * 1. / 5)) * 2;
    printf("%.0f", roundf(m));
    return 0;
}
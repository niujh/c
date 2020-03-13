#include <stdio.h>
int main ()
{
    double x,y,n,m;
    int t;
    scanf ("%lf %d",&x,&t);
    if (x < 3)
        y = 10;
    else
    
        if (x <= 10)
            y = 10 + (x - 3) * 2;
    
    else
        y = 10 + (10-3) * 2 + (x - 10) * 3;
    n = t / 5 * 2;
    m = y + n;
    printf ("%.0f",m);
    return 0;
}
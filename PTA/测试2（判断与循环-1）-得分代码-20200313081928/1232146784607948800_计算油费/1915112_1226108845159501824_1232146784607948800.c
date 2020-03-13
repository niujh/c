#include <stdio.h>
int main ()
{
    int a,b;
    char c;
    double y;
    scanf ("%d %d %c",&a,&b,&c);
    if (b == 90)
        y = a *6.95;
    else
        if (b == 93)
            y = a * 7.44;
    else
        y = a * 7.93;
    
    if (c == 'm')
        y *= 0.95;
    else
        y *= 0.97;
    printf ("%.2f",y);
    return 0;

}
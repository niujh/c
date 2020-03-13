#include <stdio.h>

double fact (int n)
{
    double sum = 1.0;
    for (;n >= 1;n--)
    {
        sum *= n;
    }
    return sum;
}

int main ()
{
    int n;
    double e = 1;
    scanf ("%d",&n);
    for (int i = 1;i <= n;i++)
    {
        e += 1 / fact (i);
    }
    printf ("%.8lf",e);
    return 0;
}
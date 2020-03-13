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

int main()
{
    int m,n;
    double c;
    scanf ("%d %d",&m,&n);
    c = fact (n) / (fact (m) * fact (n - m));
    printf ("result = %.0f",c);
    return 0;
}


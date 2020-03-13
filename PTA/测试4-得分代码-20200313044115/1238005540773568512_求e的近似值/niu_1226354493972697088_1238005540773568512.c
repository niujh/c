#include<stdio.h>

double fact(int n)
{
    if(n <= 1)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{
    int n;
    double e=1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        e += 1. / fact(i);
    }
    printf("%.8f", e);

    return 0;
}
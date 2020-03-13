#include<stdio.h>
double fact(int n)
{
    int i;
    double s = 1;
    for (i = 1;i <= n;i++)
    {
        s = s*i;
    }
    return s;
}
int main(void)
{
    int n;
    int i;
    double s = 1;
    scanf("%d",&n);
    for (i = 1;i <= n;i++)
    {
        s = s + 1/fact(i);
    }
    printf("%.8lf",s);
}

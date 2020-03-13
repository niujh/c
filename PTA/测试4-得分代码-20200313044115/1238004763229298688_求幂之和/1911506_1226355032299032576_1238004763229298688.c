#include<stdio.h>
long Pow(int n)
{
    long i,s;
    s = 1;
    for (i = 1;i <= n;i++)
    {
        s = 2 * s;
    }
    return s;
}
int main ()
{
    int n;
    int i;
    long sum = 0;
    scanf("%d",&n);
    for (i = 1;i <= n;i++)
    {
        sum = sum + Pow(i);
    }
    printf("result = %ld",sum);
}
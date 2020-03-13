#include<stdio.h>
double fact(int n);
int main()
{
    int m,n;
    double result;
    scanf("%d%d",&m,&n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf",result);
}
double fact(int n)
{
    double s=1;
    for(int i=2;i<=n;i++)
    {
        s=s*i;
    }
    return s;
}
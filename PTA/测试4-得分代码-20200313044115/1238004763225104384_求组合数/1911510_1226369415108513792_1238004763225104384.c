#include<stdio.h>
double Fact(int n);
int main(void)
{
    int n,m;
    double c;
    scanf("%d %d",&m,&n);
    c = Fact(n)/(Fact(m)*Fact(n-m));
    printf("result = %.0lf",c);
    return 0;
}
double Fact(int n)
{
    int i;
    double s = 1;
    for (i = 1;i <= n;i++)
    {
        s = s*i;
    }
    return s;
}

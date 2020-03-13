#include<stdio.h>
double fact(int n);
int main()
{
    int m,n;
    m=n=1;
    double c=0.0;
    scanf("%d %d",&m,&n);
    c=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf\n",c);
    return 0;
}
double fact(int n)
{
    int x;
    double y=1.0;
    for (x=1;x<=n;x++)
    {
        y=y*x;
    }
    return y;
}
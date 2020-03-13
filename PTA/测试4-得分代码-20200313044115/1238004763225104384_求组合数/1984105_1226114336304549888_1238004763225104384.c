#include<stdio.h>
double fact(int n);
int main()
{
    int m,n;
    double e;
    scanf("%d %d",&m,&n);
    e=fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0lf",e);
    return 0;
}

double fact(int n)
{
    double sum=1;
    for( int i=2;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}

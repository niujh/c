#include<stdio.h>
double fact(int n);

int main()

{
    int m,n;
    if(scanf("%d %d",&m,&n));
    double result;
    result = fact(n)/(fact(m)*fact(n-m));
    printf("result = %.01f",result);
    return 0;
}
double fact(int n)
{
    double sul = 1;
    for(int i=2;i<=n;i++)
    {
        sul*=i;
    }
    return sul;
}
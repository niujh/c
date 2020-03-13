#include<stdio.h>
double js(int n)
{
    int i;
    double sum;
    for(i=1,sum=1;i<=n;i++)
    {
        sum=i*sum;
    }
    return sum;
}
int main()
{
    int n,i;
    double sum;
    scanf("%d",&n);
    for(sum=1,i=1;i<=n;i++)
    {
        sum=sum+1.0/js(i);
    }
    printf("%.8f",sum);
}
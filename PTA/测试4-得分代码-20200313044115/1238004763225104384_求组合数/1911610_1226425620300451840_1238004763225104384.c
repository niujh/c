#include<stdio.h>
double my(int n);
int main()
{
    int x,i;
    double y;
    int m,n;
    scanf("%d%d",&m,&n);
    y=my(n)/(my(m)*my(n-m));
    printf("result = %.0f",y);
    return 0;
}
double my(int n)
{
    int i;
    double result;
    result=1;
    for(i=1;i<=n;i++)
    {
        result=result*i;
    }
    return result;
}
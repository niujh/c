#include<stdio.h>
double fact(int(n))
{
    int i;
    double result=1.0;
    if(n==1)
    {
        return 1.0;
    }
    else
    {
        for(i=2;i<=n;i++)
        {
            result*=i;
        }
    }
    return result;
}
int main()
{
    int m,n;
    double result;
    scanf("%d %d",&m,&n);
    result=fact(n)/(fact(m)*(fact(n-m)));
    printf("result = %.0f\n",result);
}
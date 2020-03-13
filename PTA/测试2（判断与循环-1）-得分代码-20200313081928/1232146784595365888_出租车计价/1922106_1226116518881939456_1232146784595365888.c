#include<stdio.h>
int main()
{
    double n, sum;
    int m;
    scanf("%1f%d",&n,&m);
    if(n<=3)
    {
    sum=10.0+(m/5)*2;
    print("%.0f",sum);
    }
    if(n>3&&n<=10)
    {
        sum=10+(m/5)*2+(n-3)*2;
        print("%.0f",sum);
    }
    if(n>10)
        {
        sum=10+7*2+(m/5)*2+(n-10)*3;
        print("%.0f",sum);
        }

        return 0;
}
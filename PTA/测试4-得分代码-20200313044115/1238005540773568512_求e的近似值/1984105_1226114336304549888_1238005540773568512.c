#include<stdio.h>
int main()
{
    int n;
    double m=1,e=0;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        if(i==0)
        {
            m=1;
        }
        else
        {
            m*=i;
        }
        e+=1/m;
    }
    printf("%.8lf",e);
    return 0;
}
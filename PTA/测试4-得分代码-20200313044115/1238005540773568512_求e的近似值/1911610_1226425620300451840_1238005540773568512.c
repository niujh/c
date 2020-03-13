#include<stdio.h>
int main()
{
    int i,n;
    double sum = 0,b=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        b*=i;
        sum+=1.0/b;
    }
    printf("%.8lf",sum+1);
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double m,q,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;)
    {
        q=(double)i;
        m=pow(2.0,i);
        sum=sum+m;
        i++;
    }
    printf("result = %.0lf",sum);
    return 0;
}
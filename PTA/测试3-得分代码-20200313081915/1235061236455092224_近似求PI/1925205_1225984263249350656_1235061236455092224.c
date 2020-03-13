#include<stdio.h>
int main()
{
    double eps,sum=1,i,a=1;
    scanf("%le",&eps);
    for(i=1;a>=eps;i++)
    {
        a=a*i/(2*i+1);
        sum+=a;
    }
    printf("PI = %.5f\n",2*sum);
    return 0;

}
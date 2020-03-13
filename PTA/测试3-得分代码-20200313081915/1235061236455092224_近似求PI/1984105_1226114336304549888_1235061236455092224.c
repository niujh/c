#include<stdio.h>
int main()
{
    double eps,n=1,s=1.0;
    scanf("%le",&eps);
    for(int i=1;n>eps;i++)
    {
        n=n*i/(2*i+1);
        s+=n;
    }
    printf("PI = %0.5f",s*2);
    return 0;
}
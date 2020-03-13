#include<stdio.h>
long long int fact(long long int n)
{
int q;
for(q=n-1;q>=1;q--)
    n*=q;
return n;
}
int main()
{
long long int i,n;
double sum=1.0;
scanf("%lld",&n);
for(i=1;i<=n;i++)
{
sum=sum+1.0/fact(i);
}
if(n<=60)
printf("%.8lf",sum);
if(n>=60)
printf("2.71828183");
return 0;
}
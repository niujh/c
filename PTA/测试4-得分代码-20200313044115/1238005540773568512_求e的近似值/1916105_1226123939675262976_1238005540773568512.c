#include<stdio.h>
int main()
{
double fact(int n);
int n,i;
double s=0;
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    s=s+1.0/fact(i);
}
printf("%.8f\n",s);
    return 0;
}
double fact(int n)
{
    double f;
    if(n==0||n==1)
        f=1.0;
    else
        f=fact(n-1)*n;
    return(f);
    return 0;
}
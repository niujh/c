
#include<stdio.h>
double fact(double z)
{
double i,a=1;
for(i=1;i<=z;i++)
a=a*i;
return a;
} 
int main()
{
double x,y,m,n;
scanf("%lf %lf",&m,&n);
y=fact(n-m);
m=fact(m);
n=fact(n);
x=n/(m*y);
printf("result = %.0lf",x);
}
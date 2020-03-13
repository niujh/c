#include<stdio.h>
int main()
{
int b;
double a,t;
scanf("%lf %d",&a,&b);
if(a>0&&a<=3)
{
if(b>=0&&b<5) t=10;
else t=10+(b/5)*2;
printf("%.0lf",t);
}
else if(a>3&&a<=10)
{
if(b<5) t=10+(a-3)*2;
else t=10+(a-3)*2+(b/5)*2;
printf("%.0lf",t);
}
else if(a>10)
{
if(b<5) t=24+(a-10)*3;
else t=24+(a-10)*3+(b/5)*2;
printf("%.0lf",t);
}
}

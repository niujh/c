#include<stdio.h>
int main()
{
double a=1,b=1,c=1,d=1,s=1,x=3,eps=0;
scanf("%le",& eps);
while(b>eps)
{s=1;
x=3;
b=1;
for(c=1;c<=d;c++)
{b=b*s/x;
s=s+1;
x=x+2;}
d=d+1;
a=a+b;}
a=a*2;
printf("PI = %.5f",a);
return 0;
}

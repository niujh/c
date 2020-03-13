#include<stdio.h>
int main()
{
float x,y;
scanf("%f",&x);
if (x==0)
y=0;
else
y=1/x;
printf("f(%.1f) = %.1f",x,y);
return 0;
}
#include <stdio.h>
#include<math.h>
int main(void)
{
double x, y, f;
printf("Please input 2 double number in the form of x y:\n");
scanf("%lf%lf", &x, &y);
if(x>=0)
{
if(y>0)
f = 2*x*x + 3*x +1/(x+y);
else
f = 2*x*x + 3*x +1/(1+y*y);
}
else
f = 3*sin(x+y)/(2*x*x) + 3*x + 1;
printf("x=%lf, y=%lf, f(x, y)=%lf\n", x, y, f);
return 0;
}
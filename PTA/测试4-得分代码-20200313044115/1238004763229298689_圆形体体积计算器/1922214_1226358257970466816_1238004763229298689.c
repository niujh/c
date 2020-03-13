#include <stdio.h>
#define PI 3.141592653589
void Ball(void)
{
double v;
double r;
scanf("%lf", &r);
v = 4 * PI * r * r * r / 3;
printf("%.2lf\n", v);
}
void Cylinder(void)
{
double v;
double r;
double h;
scanf("%lf%lf", &r, &h);
v = PI * r * r * h;
printf("%.2lf\n", v);
}
void Cone(void)
{
double v;
double r;
double h;
scanf("%lf%lf", &r, &h);
v = PI * r * r * h / 3;
printf("%.2lf\n", v);
}
int main()
{
int slt;
while(1)
{
printf("1-Ball\n");
printf("2-Cylinder\n");
printf("3-Cone\n");
printf("other-Exit\n");
printf("Please enter your command:\n");
scanf("%d", &slt);
switch (slt)
{
case 1:
printf("Please enter the radius:\n");
Ball();
break;
case 2:
printf("Please enter the radius and the height:\n");
Cylinder();
break;
case 3:
printf("Please enter the radius and the height:\n");
Cone();
break;
default: slt = 0;
}
if (slt == 0)
break;
}
return 0;
}
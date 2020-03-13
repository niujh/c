#include<stdio.h>
int main()
{
while(1)
{
printf("1-Ball\n");
printf("2-Cylinder\n");
printf("3-Cone\n");
printf("other-Exit\n");
printf("Please enter your command:\n");
int n;
scanf("%d",&n);
if(n==1)
{
    printf("Please enter the radius:\n");
    double r,v,pi=3.1415926535;
    scanf("%lf",&r);
    v=4*pi*r*r*r/3;
    printf("%.2f\n",v);
}
else if(n==2)
{
    printf("Please enter the radius and the height:\n");
    double r,h,v,pi=3.1415926535;
    scanf("%lf %lf",&r,&h);
    v=pi*r*r*h;
    printf("%.2f\n",v);
}
else if(n==3)
{
    printf("Please enter the radius and the height:\n");
    double r,h,v,pi=3.1415926535;
    scanf("%lf %lf",&r,&h);
    v=pi*r*r*h/3;
    printf("%.2f\n",v);
}
else
{
    break;
}
}
    return 0;
}
#include<stdio.h>
#include<math.h>

int main()
{
int choice;
double r,h;
while(1)
{
printf("1-Ball\n");
printf("2-Cylinder\n");
printf("3-Cone\n");
printf("other-Exit\n");
printf("Please enter your command:\n");
scanf("%d",&choice);


if (choice==1)
{printf("Please enter the radius:\n");
scanf("%lf",&r);
printf("%.2f\n",4.0/3*3.141592654*pow(r,3));
}
else if (choice==2)
{printf("Please enter the radius and the height:\n");
scanf("%lf%lf",&r,&h);
printf("%.2lf\n",3.141592654*pow(r,2)*h);}

else if (choice==3)
{printf("Please enter the radius and the height:\n");
scanf("%lf%lf",&r,&h);
printf("%.2lf\n",1.0/3*3.141592654*pow(r,2)*h);}
else
{break;}
}
}
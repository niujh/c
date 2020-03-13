#include<stdio.h>
#include<math.h>
#define PI 3.1415926535   
int main()
{
	int n;
	double height,radius;
	while(1)
	{
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\n"
		       "Please enter your command:\n");
		scanf("%d",&n);
		if(n==1)
		{
			printf("Please enter the radius:\n");
			scanf("%lf",&radius);
			printf("%.2lf\n",4*PI*pow(radius,3)/3);
		}
		else if(n==2)
		{
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&radius,&height);
			printf("%.2lf\n",PI*radius*radius*height);
		}
		else if(n==3)
		{
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&radius,&height);
			printf("%.2lf\n",PI*radius*radius*height/3);
		}
		else
		{
			break;
		}
	}
}
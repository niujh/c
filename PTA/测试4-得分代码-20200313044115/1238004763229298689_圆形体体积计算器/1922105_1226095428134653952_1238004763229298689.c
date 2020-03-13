#include<stdio.h>
#include<math.h>
int main()
{
	int  h;
	double pi=3.1415926535,r,v;
	printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
	int n;
	scanf("%d",&n);
	if(n==1)
	{
		printf("Please enter the radius:\n");
		scanf("%lf",&r);
		v=4.0/3.0*pi*pow(r,3);
		printf("%.2lf",v);
	}
	else if(n==2)
	{
		printf("Please enter the radius and the height:\n");
		scanf("%lf %d",&r,&h);
		v=pi*pow(r,2)*h;
		printf("%.2lf",v);
	}
	else if(n==3)
	{
		printf("Please enter the radius and the height:\n");
		scanf("%lf %d",&r,&h);
		v=1.0/3*pi*pow(r,2)*h;
		printf("%.2lf",v);
	}
	return 0;
}
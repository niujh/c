#include<stdio.h>
#include<math.h>
const double PI = 3.1415926535;
int main()
{
	printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
	int n;
	double r,h,v;
	scanf("%d",&n);
	switch(n){
	case 1:
        printf("Please enter the radius:");
		scanf("%f",&r);
		v=4*PI*pow(r,3)/3;
		printf("%.2lf",v);
		break;
	case 2:
        printf("Please enter the radius and the height:");
		scanf("%f %f",&r,&h);
		v=PI*pow(r,2)*h;
		printf("%.2lf",v);
		break;
	case 3:
        printf("Please enter the radius and the height:");
		scanf("%f %f",&r,&h);
		v=PI*pow(r,2)*h/3;
		printf("%.2lf",v);
		break;
	default:
		break;
	}
	return 0;
}

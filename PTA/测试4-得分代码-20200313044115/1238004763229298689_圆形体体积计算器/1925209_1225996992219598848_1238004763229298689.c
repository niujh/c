#include<stdio.h>
#include<math.h>
#define PI 3.1415926535  
int main()
{
	int a;
	double h,r;
	while(1){
		printf("1-Ball\n2-Cylinder\n3-Cone\nother-Exit\nPlease enter your command:\n");
		scanf("%d",&a);
		if(a==1){
			printf("Please enter the radius:\n");
			scanf("%lf",&r);
			printf("%.2lf\n",4*PI*pow(r,3)/3);
		}else if(a==2){
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&r,&h);
			printf("%.2lf\n",PI*pow(r,2)*h);
		}else if(a==3){
			printf("Please enter the radius and the height:\n");
			scanf("%lf %lf",&r,&h);
			printf("%.2lf\n",PI*pow(r,2)*h/3);
		}else{
			break;
		}
	}
}
#include<stdio.h>
double fact(double a)
{
	double z;
	for(z=1;a>1;a--){
		z=z*a;
	}
	return z;
}
int main()
{
	double m,n;
	double sum1,sum2,sum3;
	double s;
	double c;
	scanf("%lf %lf",&m,&n);
	s=n-m;
	sum1=fact(m);
	sum2=fact(n);
	sum3=fact(s);
	c=sum2/(sum1*sum3);
	printf("result = %.0f",c);
	return 0;
}
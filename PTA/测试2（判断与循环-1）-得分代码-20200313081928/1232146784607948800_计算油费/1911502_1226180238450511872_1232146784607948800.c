#include<stdio.h>
int main()
{
	char c;
	double a,d,e,price=0.0;
	int b=0;
	scanf("%lf %d %c",&a,&b,&c);
	if (c=='m')
	{
		e=0.05;
	}
	else
	{
		e=0.03;
	}
	if (b==90)
	{
		d=6.95;
	}
	else
	{
		if (b==93)
		{
			d=7.44;
		}
		else
		{
			d=7.93;
		}
	}
	price=a*d*(1-e);
	printf("%.2lf\n",price);
	return 0;
}
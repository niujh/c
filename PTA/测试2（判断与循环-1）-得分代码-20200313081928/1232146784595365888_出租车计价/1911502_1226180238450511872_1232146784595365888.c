#include<stdio.h>
int main()
{
	double mile,a=0.0;
	int time,b,c,d=0;
	scanf("%lf %d",&mile,&time);
	if (mile<=3.0)
	{
		a=10.0;
	}
	else
	{
		if (mile<=10.0)
		{
			a=10.0+2.0*(mile-3);
		}
		else
		{
			a=24.0+3.0*(mile-10);
		}
	}
	b=(int)a;
	if (a-b>=0.5)
	{
		b+=1;
	}
	c=time/5*2;
	d=b+c;
	printf("%d",d);
	return 0;
}
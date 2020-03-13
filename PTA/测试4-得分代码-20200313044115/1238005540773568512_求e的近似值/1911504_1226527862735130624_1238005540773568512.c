#include<stdio.h>
int main()
{
	int i,n;
	double sum=1.0;
    double t;
	scanf("%d",&n);
	double leicheng(int x);
	for(i=1;i<=n;i++)
	{
		t=1/leicheng(i);
		sum=sum+t;
	}
	printf("%.8f",sum);
	
}
double leicheng(int x)
	{
		int i=1;
		int ji=1;
		while(i<=x)
		{
			ji=ji*i;
			i++;
		}
		return ji;
 	}
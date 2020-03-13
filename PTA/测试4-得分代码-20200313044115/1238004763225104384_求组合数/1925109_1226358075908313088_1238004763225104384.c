
#include <stdio.h>
double fact(int n);
int main()
{
	int m,n;
	if(scanf("%d %d",&m,&n)){};
	double result;
	result=fact(n)/(fact(m)*fact(n-m));
	printf("result = %.0lf",result);
	return 0;
}
double fact(int n)
{
	double a=1;
	for(int i=2;i<=n;i++)
	{
		a*=i;
	} 
	return a;
}


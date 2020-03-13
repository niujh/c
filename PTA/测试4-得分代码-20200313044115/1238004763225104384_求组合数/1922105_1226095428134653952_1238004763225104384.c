#include<stdio.h>
double f(int n)
{	
	if(n==1||n==0)
		return 1;
	else
		return f(n-1)*n;
}
int main()
{
	int m,n;
	double s1,s2,s3,result;
	scanf("%d %d",&m,&n);
	s1=f(n);
	s2=f(m);
	s3=f(n-m);
	result=s1/s2/s3;
	printf("result = %.0f",result);
	return 0;
}
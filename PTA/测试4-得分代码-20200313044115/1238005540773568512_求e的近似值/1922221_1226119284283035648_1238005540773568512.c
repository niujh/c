# include<stdio.h>
int main()
{
	int m,n;
    double j=1;
	double sum=1.0;
	scanf("%d",&n);
	for(m=1;m<=n;m++)
	{
		j=j*m;
		sum=sum+1.0/j;
	}
	printf("%0.8lf",sum);
	return 0;
}

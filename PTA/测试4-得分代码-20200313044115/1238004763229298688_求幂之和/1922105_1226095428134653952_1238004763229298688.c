#include<stdio.h>
#include<math.h>
int main()
{
	double sum;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum=sum+pow(2,i);
	}
	printf("result = %.0f",sum);
	return 0;
}
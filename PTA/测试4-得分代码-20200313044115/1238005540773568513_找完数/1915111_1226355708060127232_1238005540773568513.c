#include<stdio.h>
int main()
{
	int n,m,i,j,a,b=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if(i==1)
			continue;
		a=1;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				a+=j;
		}
	if(a==i)
	{
		printf("%d = 1",i);
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				printf(" + %d",j);
				b+=1;
			}
		}
		printf("\n");
	}
	}
	if(b==0)
		printf("None\n");
	return 0;
}
#include<stdio.h>
int main()
{
	int a,b,c,d,sum,i,j;
	scanf("%d %d",&a,&b);
	for(c=a;c<=b;c++)
	{
		sum=0;
		for(d=1;d<c;d++)
		{
			if(c%d==0)
			{
				sum+=d;
			}
		}
		if(sum==c)
		{
			printf("%d = 1",c);
			for(i=2;i<d;i++)
			{
				if(c%i==0)
				{
					printf(" + %d",i);
				}
			}
			printf("\n");
			j++;
		}
		
	}
	if(j==0)
		{
			printf("None\n");
		}
	return 0;
}
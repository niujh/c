#include<stdio.h>
int main()
{
	int n,i,a,c,b,e,d=0,j,sum=1;
	char f;
	scanf("%d %c",&n,&f);
	for(i=3;i<n;i=i+2)
	{
		sum=sum+i*2;
		if(sum>n)
		{
			a=i-2;
			b=n-(sum-i*2);
			break;
		}

	}
	c=a;
	for(a=i-2;a>=1;a=a-2)
	{
		for(j=0;j<d;j++)
		{
			printf(" ");
		}
		for(i=0;i<a;i++)
		{	
		
			printf("%c",f);
		
		}	
		d=d+1;
	
		printf("\n");
	
	
	}
	for(e=a+4;e<=c;e=e+2)
	{
		for(j=d-3;j>=0;j--)
		{
			printf(" ");
		}
		for(i=a+2;i<=e;i++)
		{	
			printf("%c",f);
		}	
		d=d-1;
		printf("\n");
	
	
	}
	printf("%d\n",b);


	return 0;
}
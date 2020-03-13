#include <stdio.h> 
int main()
{
	int n,i=1,x=1,k=1;
	int m,j,r,b,y;
	char ch;
	scanf("%d %c",&n,&ch);
	while(i<n)
	{
		x=x+2;
		i=i+x*2;
		k++;
	}
	if(i==n&&x>0)
	{
		for(m=0;m<k;m++)
		{
			for(y=0;y<m;y++)
				{
					printf(" ");
				}
			for(j=0;j<x;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
			x=x-2;
		}
		x=x+2;
		for(m=k-1;m>0;m--)
		{
			x=x+2;
			for(y=1;y<m;y++)
				{
					printf(" ");
				}
			for(j=0;j<x;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
		}
	}
	else
	{
		r=i-x*2;
		b=n-r;
		x=x-2;
		k=k-1;
		i=r;
		for(m=0;m<k;m++)
		{
			for(y=0;y<m;y++)
				{
					printf(" ");
				}
			for(j=0;j<x;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
			x=x-2;
		}
		x=x+2;
		for(m=k-1;m>0;m--)
		{
			x=x+2;
			for(y=1;y<m;y++)
				{
					printf(" ");
				}
			for(j=0;j<x;j++)
			{
				printf("%c",ch);
			}
			printf("\n");
		}
		printf("%d",b);
	}
	return 0;
}

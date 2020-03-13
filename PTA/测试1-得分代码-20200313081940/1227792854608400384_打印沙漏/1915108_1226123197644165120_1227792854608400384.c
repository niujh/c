#include<stdio.h>
#include<math.h>
void shalou(int n,char c)
{
	int i,j,k,p;
	for(i=0,p=n;i<n;i++,p--)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=2*p-1;k>0;k--)
		{
			printf("%c",c);
		}
		printf("\n");
	}
	for(i=n-2,p=2;i>=0;i--,p++)
	{
		for(j=0;j<i;j++)
		{
			printf(" ");
		}
		for(k=0;k<2*p-1;k++)
		{
			printf("%c",c);
		}
		printf("\n");
	}
}
int main()
{
	int n,i,yu;
	char c;
	scanf("%d %c",&n,&c);
	for(i=1;;i++)
	{
		if(i*i*2-1>=n) break;
	}
	if(i*i*2-1>n)
	{
		i--;
		yu=n-(i*i*2-1);
	}
	shalou(i,c);
	 printf("%d",yu);
} 

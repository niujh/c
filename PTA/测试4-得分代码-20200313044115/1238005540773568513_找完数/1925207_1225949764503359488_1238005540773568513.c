#include<stdio.h>
int main()
{
	int m,n,i,j,s,k,a=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
	    s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i)
		{
			printf("%d = 1",i);
			for(k=2;k<j;k++)
			{
				if(i%k==0)
				{
					printf(" + %d",k);
				}
			}
			printf("\n");
			a++;
		}
		
	}
	if(a==0)
		{
			printf("None\n");
		}
	return 0;
}

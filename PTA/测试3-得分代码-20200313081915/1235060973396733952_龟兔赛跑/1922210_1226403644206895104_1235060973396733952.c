
#include<stdio.h>
int main()
{
	int t,i,j=0,k=0,x=0,y=0,flag=0;
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		if(flag==1) 
		{
			k++;
			if(k==30) flag=0;
		}
		else 
		{
			j++;
			x=x+9;
			if(j==10)
			{
				if(x>y)
				{
					flag=1;
					k=0;
				}
				j=0;
			}
		}
		y=y+3;
	}
	if(x==y) printf("-_- %d\n",x);
	else if(x<y) printf("@_@ %d\n",y);
	else printf("^_^ %d\n",x);
	return 0;
}

#include<stdio.h>
int main()
{
	int a,b,i,j,s,k,m=0;
	scanf("%d %d",&a,&b);//输入两个数
	for(i=a;i<=b;i++)
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
			m++;
		}
		
	}
	if(m==0)
		{
			printf("None\n");
		}
	return 0;
}

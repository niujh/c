#include<stdio.h>
int main()
{
	int n,m,i,j,sum,num=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
        sum=1;
		if(i==1) continue; 
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			 sum+=j;	 
		}
		if(sum==i)
		{
			printf("%d = 1",sum);
			for(j=2;j<i;j++)
			{
				if(i%j==0)
				printf(" + %d",j);	
			}
			printf("\n");
			num++;
                     }
	}
	if(num==0) 
	printf("None");
	return 0;
}


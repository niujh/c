#include<stdio.h>
int main()
{
	int m,n;
	int leicheng(int x);
	int c;
	scanf("%d %d",&m,&n);
	c=leicheng(n)/leicheng(m)/leicheng(n-m);
	printf("result = %d",c  );
	return 0;
}
int leicheng(int x)
	{
		int i=1;
		int ji=1;
		while(i<=x)
		{
			ji=ji*i;
			i++;
		}
		return ji;
 	}
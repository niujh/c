#include <stdio.h>
int main()
{
	int n,i,g,k,ji=0,ou=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&g);
		if(n<0||n>1000)
			continue;
		k=g%2;
		switch(k)
		{
			case 1:ji++;break;
			case 0:ou++;break;
		}
	}
	printf("%d %d",ji,ou);
	return 0;
}
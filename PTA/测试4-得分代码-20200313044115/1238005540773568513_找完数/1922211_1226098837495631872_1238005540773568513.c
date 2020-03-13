#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g;
	scanf("%d %d",&a,&b);
	for(c=a;c<=b;c++)
	{
		e=0;
		for(d=1;d<c;d++)
		{
			if(c%d==0)
			{
				e+=d;
			}
		}
		if(e==c)
		{
			printf("%d = 1",c);
			for(f=2;f<d;f++)
			{
				if(c%f==0)
				{
					printf(" + %d",f);
				}
			}
			printf("\n");
			g++;
		}
		
	}
	if(g==0)
		{
			printf("None\n");
		}
	return 0;
}
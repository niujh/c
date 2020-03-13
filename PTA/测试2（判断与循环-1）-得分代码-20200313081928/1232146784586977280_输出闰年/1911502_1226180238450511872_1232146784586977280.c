#include<stdio.h>
int main()
{
	int a,year=2001,b=0;
	scanf("%d",&year);
	if (year>2100||year<=2000)
	{
		printf("Invalid year!\n");
	}
	else
	{
		for (a=2001;a<=year;a++)
		{
			if (a%4==0&&a%100!=0||a%400==0)
			{
				printf("%d\n",a);
				b++;
			}
		}
		if (b==0)
		{
			printf("None\n");
		}
	}
	return 0;
}
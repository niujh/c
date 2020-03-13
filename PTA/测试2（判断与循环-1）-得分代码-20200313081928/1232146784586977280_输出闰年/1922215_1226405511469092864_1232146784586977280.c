#include<stdio.h>
int main()
{
	int sum = 0, y, i;
	scanf("%d", &y);
	if (y < 2001 || y > 2100)
	{
		printf("Invalid year!\n");
		return 0;
	}
	for (i = 2001; i <= y; i++)
	{
		if (i%4==0 && i%100!=0 || i%400==0)
		{
			printf("%d\n", i);
			sum++;
		}
	}
	if (sum == 0)
		printf("None");
	return 0;
}  

#include<stdio.h>
#include<stdlib.h>
int main()
{
	double mile = 0;
	int time = 0;
	double price, price1, price2;
	scanf("%lf %d", &mile, &time);
	if (mile <= 3)
	{
		price1 = 10;
	}
	else if (mile <= 10)
	{
		price1 = 10 + (mile - 3) * 2.0;
	}
	else
	{
		price1 = 10 + (10 - 3)*2.0 + (mile - 10)*3.0;
	}
	price2 = time/ 5 * 2;
	price = price1 + price2;
	printf("%.0f\n", price);
	return 0;
}

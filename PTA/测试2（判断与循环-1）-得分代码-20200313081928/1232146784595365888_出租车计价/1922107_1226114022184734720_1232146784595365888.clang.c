#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	double x = 0;
	int t = 0;
	double price, price1, price2;
	scanf("%lf %d", &x, &t);
	if (x <= 3)
	{
		price1 = 10;
	}
	else if (x <= 10)
	{
		price1 = 10 + (x - 3) * 2.0;
	}
	else
	{
		price1 = 10 + (10 - 3)*2.0 + (x - 10)*3.0;
	}
	price2 = t/ 5 * 2;
	price = price1 + price2;
	printf("%.0f\n", price);
	system("pause");
	return 0;
}

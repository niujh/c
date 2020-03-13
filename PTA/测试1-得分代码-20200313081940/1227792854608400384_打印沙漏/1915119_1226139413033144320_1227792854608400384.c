#include<stdio.h>
int main()
{
	printf("输入一个正整数和符号\n");
	int x,n,sum1,d,t;
	char y;
	scanf_s("%d%c", &x, &y);
	sum1 = 1;
	for (n = 1; sum1 <= x; n=n+2) {
		sum1 = sum1 + n * 2 + 4;
	}
	sum1 = sum1 - n * 2 ;
	n = n - 2;
	d = n;
	while (d != 1)
	{
		for (t = (n - d)/2; t != 0; t--) {
			printf(" ");
		}
		for (t = d; t != 0; t--) {
			printf("%c", y);
		}
		printf("\n");
		d = d - 2;
	}
	while (d != n + 2)
	{
		for (t = (n - d) / 2; t != 0; t--) {
			printf(" ");
		}
		for (t = d; t != 0; t--) {
			printf("%c", y);
		}
		printf("\n");
		d = d + 2;
	}
	printf("%d", x - sum1);
	return 0;
}
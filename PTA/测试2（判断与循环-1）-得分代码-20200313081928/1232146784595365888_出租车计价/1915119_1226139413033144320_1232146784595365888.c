#include<stdio.h>
int main()
{
	int n,sum=0;
	float y;
	scanf("%f %d", &y, &n);
	if (y <= 3)
		sum = sum + 10;
	else if ((y - 3) <= 7)
		sum = sum + (int)(10 + (y - 3) * 2+0.5);
	else
		sum = sum + (int)(24 + (y - 10) * 3+0.5);
	sum = sum + (n/5) * 2;
	printf("%d", sum);
	return 0;
}
#include <stdio.h>
int main(void)
{
	int sum = 0;
	while (1 != sum % 5 || 5 != sum % 6 || 4 != sum % 7 || 10 != sum % 11)
	{
		sum++;
	}
	printf("%d\n", sum);
	return 0;
}
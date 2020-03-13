#include <stdio.h>
 
int main()
{
	int m, n;
	char a;
	scanf("%d %c", &n, &a);
	if (n % 2 == 0)
	{
		m = n / 2;
	}
	else
	{
		m = n / 2 + 1;
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			printf("%c", a);
		}
		printf("\n");
	}
 
	return 0;
}
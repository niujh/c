#include<stdio.h>
void yinzi(int);
int main()
{
	int m, n;
	int sum ;
	int i, j;
	int flag = 0;
	scanf("%d%d",&m,&n);
	for (i = m; i <= n; i++)
	{
		sum = 0;
		for (j = 1; j < i; j++)
		{
			if (i%j == 0)
			{
				sum = sum + j;
			}
		}
		if (sum == i)
		{
			flag = 1;
			printf("%d = 1", i);
			yinzi(sum);
			printf("\n");
		}
	}
	if (flag == 0)
	{
		printf("None\n");
	}
	system("pause");
	return 0;
}


void yinzi(int n)
{
	for (int i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf(" + %d", i);
		}
	}


}

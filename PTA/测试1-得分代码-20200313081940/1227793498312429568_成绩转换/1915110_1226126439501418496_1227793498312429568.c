#include<stdio.h>
int main()
{
	int score;
	scanf("%d", &score);
	if (score < 0 || score>100)
	{
		printf("输入的数据非法!\n");
	}
	else
	{
		switch (score / 10)
		{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:printf("E\n"); break;
		case 6:printf("D\n"); break;
		case 7:printf("C\n"); break;
		case 8:printf("B\n"); break;
		case 9:
		case 10:printf("A\n"); break;
		}
	}
	return  0;
}


#include<stdio.h>

int main() 
{
	int T, t, m;
	scanf("%d", &T);
	t = T % 90;
	m = T / 90;
	if (t < 30 && t > 0)
		printf("^_^ %d\n", m * 270 + t * 9);
	else if (t == 30)
		printf("-_- %d\n", m * 270 + t * 3);
	else if (t > 30 && t < 45)
		printf("@_@ %d\n", m * 270 + t * 3);
	else if (t == 45)
		printf("-_- %d\n", m * 270 + t * 3);
	else if (t > 45 && t <= 50)
		printf("^_^ %d\n", m * 270 + 90 + (t - 40) * 9);
	else if (t > 50 && t < 60)
		printf("^_^ %d\n", m * 270 + 180);
	else if (t == 60)
		printf("-_- %d\n", m * 270 + t * 3);
	else if (t > 60 && t < 90)
		printf("@_@ %d\n", m * 270 + t * 3);
	else
		printf("-_- %d\n", m * 270 + t * 3);
    return 0;
}
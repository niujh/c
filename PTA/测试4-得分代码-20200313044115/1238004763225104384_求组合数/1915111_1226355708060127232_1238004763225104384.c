#include<stdio.h>
double fact(int);
int main(void)
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("result = %.0f\n", fact(n) / (fact(m)*fact(n-m)));
    return 0;
}
double fact(int n)
{
	double pro = 1;
	for (int i = n; i > 0; i--)
	{
		pro = pro*i;
	}
	return pro;
}
#include<stdio.h>
double fact(int i)
{
	int x=1;
	for (i; i > 0; i--)
		x = x * 2;
        return x;
}
int main() {
	int a, i,s=0;
	scanf("%d",&a);
	for (i = a; i > 0; i--)
	{
		s = s + fact(i);
	}
	printf("result = %d",s);
}
#include<stdio.h>
int main()
{
	int i,x,a=0,b=0;
	scanf("%d",&i);
	for (i; i > 0; i--) {
		scanf("%d ",&x);
		if (x % 2 == 0) a++;
		else b++;
	}
	printf("%d %d",b,a);
	return 0;
}
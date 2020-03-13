#include<stdio.h>
int main()
{
	float x,result;
	scanf("%f/n", &x);
	if (x!=0) result=1/x;
	if (x==0) result=0;
	printf("f(%0.1f) = %0.1f", x, result);
    return 0;
}
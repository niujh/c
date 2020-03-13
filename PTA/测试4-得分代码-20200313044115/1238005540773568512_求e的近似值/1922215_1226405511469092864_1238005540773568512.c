#include<stdio.h>
int main()
{
	int i, a, b;
	double c, s;
	s=1;
	scanf("%d", &b);
	for(i=1; i<=b; i++){
		c=1;
		for(a=1; a<=i; a++){
			c=c*a;
		}
		c=1.0/c;
		s=s+c;
	}
	printf("%.8f", s);
	
	return 0;
}

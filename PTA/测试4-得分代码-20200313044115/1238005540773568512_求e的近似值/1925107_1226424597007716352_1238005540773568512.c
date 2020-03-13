
#include<stdio.h>
int main()
{
	int i, j, n;
	double item, sum;
	sum=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		item=1;
		for(j=1; j<=i; j++){
			item=item*j;
		}
		item=1.0/item;
		sum=sum+item;
	}
	printf("%.8f", sum);

	return 0;
}

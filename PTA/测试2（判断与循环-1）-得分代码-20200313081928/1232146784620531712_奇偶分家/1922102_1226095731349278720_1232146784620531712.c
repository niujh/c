#include<stdio.h>
int main()
{
	int d,a[1000],q,ou=0,ji=0;
	scanf("%d",&d);
	for(q=0;q<d;q++)
	{
		scanf("%d",&a[q]);
	}
	for(q=0;q<d;q++)
	{
		if(a[q]%2==0)ou++;
		else ji++;
	}
	printf("%d %d",ji,ou);
	return 0;
}
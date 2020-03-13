#include<stdio.h>
int main(void)
{
    int a,i;
	for(i=1;;i++)
	{
		scanf("%d",&a);
		if(a==250)
		break;
	}
	printf("%d",i);
	return 0;
}
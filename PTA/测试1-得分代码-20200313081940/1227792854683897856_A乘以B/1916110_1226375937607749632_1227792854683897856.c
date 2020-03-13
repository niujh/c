#include <stdio.h>
main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if((a>=-100&&a<=100)&&(b>=-100&&b<=100))
	printf("%d",a*b);
	return 0;
}
#include <stdio.h>
int main()
{
	int a=1,b=5,c=4,d=10,x;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	for (x=10;x<=1000000;x++)
		if (x%5==a&&x%6==b&&x%7==c&&x%11==d)
			{
				printf("%d",x);
				break;
			}
		else
				if(x==1000000) 
				printf("no answern");
	return 0;
}

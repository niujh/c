#include<stdio.h>
int main()
{
	int a,b=0;
	for(int i;;i++)
	{
		scanf("%d",&a);
		if(a%2!=0)
			b=b+a;
		if((a==0||a<0)&&a%2!=0)
		{
			b=b-a;
			break;
		}
		if((a==0||a<0)&&a%2==0)
			break;
	}
	printf("%d",b);
	return 0;
 } 
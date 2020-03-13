#include<stdio.h>
int main()
{
	int fact(int a);
	int m,n,c;
	scanf("%d %d",&m,&n);
    c=fact(n)/fact(m)*fact(n-m);
	printf("result = %d",n,c);
	return 0;
}
	int fact(int a)
	{
		int jieguo;
		if(a==0||a==1)
		jieguo=1;
		else
			jieguo=(a-1)*a;
		return(jieguo);
	}
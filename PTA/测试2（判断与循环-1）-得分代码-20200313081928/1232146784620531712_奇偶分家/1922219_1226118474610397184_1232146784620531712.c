       # include<stdio.h>
int main()
{
	int a,b,c=0,d=0,array[10000],t;
	scanf("%d",&t);
	for(a=0;a<t;a++)
	{
		scanf("%d",&array[a]);
	}
	for(b=0;b<t;b++)
	{
		if(array[b]%2!=0)
		{
			c++;	
		}
		else
		{
			d++;
		}
	}
	printf("%d %d",c,d);
	return 0;
}                                                                          
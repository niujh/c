#include <stdio.h>
int main()
{
	char a[80];
	int x;
	int i=-1;
	while(a[i]!='\n')
	{
        i++;
		scanf("%c",&a[i]);
		x=i;
	}
	for(int j=x-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return 0;
}
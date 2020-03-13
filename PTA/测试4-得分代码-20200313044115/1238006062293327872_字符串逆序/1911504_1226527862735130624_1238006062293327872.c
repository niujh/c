#include <stdio.h>
const int n=80;
int main(int argc,const char *argv[])
{
	char a[n];
	int cnt;
	int i=-1;
	while(a[i]!='\n')
	{
		i++;
		scanf("%c",&a[i]);
		cnt=i;
	}
	for(int j=cnt-1;j>=0;j--)
	{
		printf("%c",a[j]);
	}
	return 0;
}

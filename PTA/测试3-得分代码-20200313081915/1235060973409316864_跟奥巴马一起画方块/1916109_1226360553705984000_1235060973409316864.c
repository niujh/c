#include <stdio.h>
int main()
{
	int n,row;
	char c;
	scanf("%d %c",&n,&c);
	
	if(n%2 == 1) row=n/2+1;//四舍五入
	else  row=n/2;
	
	//No.1
	for(int i=0; i<n; i++)
		printf("%c",c);
	printf("\n");
	
	//No.2 ~ row-1
	for(int i=1; i<row-1; i++)
	{
		printf("%c",c);
		for(int j=0; j<n-2; j++)
			printf(" ");
		printf("%c\n",c);
	}
	
	//final row
	for(int i=0; i<n; i++)
		printf("%c",c);
	return 0;
}

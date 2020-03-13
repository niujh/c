
#include<stdio.h>
int main()
{
	int i, j, c;
	char ch, a[80], b[80];
	ch=getchar();
	for(i=0; ch!='\n'; i++){
		a[i]=ch;
		c++;
		ch=getchar();
	}
	for(i=0, j=c-1; i<c; i++, j--)
			b[j]=a[i];
	for(i=0; i<c; i++)
		printf("%c", b[i]);
		
	return 0;
}
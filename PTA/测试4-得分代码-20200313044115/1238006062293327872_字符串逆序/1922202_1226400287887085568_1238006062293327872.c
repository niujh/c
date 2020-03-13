#include<stdio.h>
int main ()
{
	int i, j=0;
	char str [80];
	while ((str [i]=getchar( ))!='\n')
		i++;
	str [i] ='\0';
	for (j=i-1;j>=0;j--)
		printf ("%c",str [j]);
	return 0;		
}
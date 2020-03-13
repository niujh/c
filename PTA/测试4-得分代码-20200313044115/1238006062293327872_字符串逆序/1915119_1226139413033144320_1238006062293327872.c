#include<stdio.h>
#include<string.h>
int main()
{
	char s[10001];
	int len=0;
	gets(s);
	len=strlen(s);
	for(int i=len-1;i>0;i--)
		printf("%c",s[i]);
	printf("%c\n",s[0]);
	
	return 0;
}

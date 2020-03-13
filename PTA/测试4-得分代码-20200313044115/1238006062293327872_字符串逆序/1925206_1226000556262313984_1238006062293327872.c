
#include<stdio.h>
#include<string.h>
void reverse(char str[],int length)
{
     int i;
	 for(i=length-1;i>=0;i--)
	 printf("%c",str[i]);	
}
int main()
{
	void reverse(char str[],int length);
	char str[20]="";
	gets(str);
	reverse(str,strlen(str));
	printf("\n");
	return 0;
}
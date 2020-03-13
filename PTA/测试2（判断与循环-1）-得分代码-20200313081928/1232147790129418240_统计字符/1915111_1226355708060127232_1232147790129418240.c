#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,d=0,i;
	char ch[10];
	for(i=0;i<10;i++)
	{
		scanf("%c",&ch[i]);
		if((ch[i]>='A'&&ch[i]<='Z')||(ch[i]>='a'&&ch[i]<='z'))
			a++;
		else if(ch[i]>='0'&&ch[i]<='9')
			c++;
		else if(ch[i]==' '||ch[i]=='\n')
			b++;
		else
			d++;
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d",a,b,c,d);
	return 0;
}
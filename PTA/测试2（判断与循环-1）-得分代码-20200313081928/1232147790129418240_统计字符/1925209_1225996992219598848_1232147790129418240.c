#include<stdio.h>

int main() 
{
	int i,c1=0,c2=0,c3=0,c4=0;
	char c;
	for( i=0;i<10;i++){
		scanf("%c",&c);
		if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
		c1++;
		else if(c>='0'&&c<='9')
		c2++;
		else if(c==' '||c=='\n')
		c3++;
		else
		c4++;
	}
    printf("letter = %d, blank = %d, digit = %d, other = %d",c1,c3,c2,c4);
    return 0;
}
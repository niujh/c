#include<stdio.h>
int main()
{
	int  a,b=0,c=0,t,i=0;
	scanf("%d",&t);
	for (a = 0; a <t; a++)
	{
		b = b + 3;
        if(a%10==0&&c>b&&i==0){
            i=30;
        }
        if(i==0) {c=c+9;}
        else {i--;}

		
	}
	if (b > c) {
		printf("@_@ %d", b);
	}
	if (b < c) {
		printf("^_^ %d", c);
	}
	if(b==c) printf("-_- %d",c);
}
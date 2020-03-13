#include<stdio.h>
int main()
{char c;
int a=0,b=0,d=0,e=0;
scanf("%d %c",&a,&c);
b=(int)((a+1)/2);
for(d=0;d<b;d++)
{for(e=0;e<a;e++)
{printf("%c",c);}
printf("\n");}
return 0;
}
#include <stdio.h>
int main()
{
int i;
char c[6],ch;
printf(“输入一个长度为5的字符串:\n”);
for(i=0;i<5;i++)
scanf("%s",&c[i]);
for(i=0;i<2;i++)
{
ch=c[i];
c[i]=c[4-i];
c[4-i]=ch;
}
printf(“逆序后的字符串为:\n”);
for(i=0;i<5;i++)
printf("%c “,c[i]);
printf(”\n");

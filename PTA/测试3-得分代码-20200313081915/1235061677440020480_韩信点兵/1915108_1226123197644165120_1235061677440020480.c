#include<stdio.h>
int main()
{
int i;
for(i=1;i<=21111;i++)
if(i%56&&i%65&&i%74&&i%1110)
printf("%d",i);
return 0;
}
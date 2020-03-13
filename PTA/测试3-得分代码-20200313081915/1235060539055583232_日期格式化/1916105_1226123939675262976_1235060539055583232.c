#include<stdio.h>

int main()
{
int i,j;
char c[10],a[10];
scanf("%s",c);
for (i=0;i<=4;i++)
    a[i+5]=c[i];
a[4]=c[5];
for(j=6;j<=9;j++)
    a[j-6]=c[j];
puts(a);
    return 0;
}
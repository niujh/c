#include<stdio.h>
#include<math.h>
int main()
{
int N, m, i, j;
char ch;
scanf("%d %c",&N,&ch);
m=(int)sqrt((N+1)/2);
for(i=m;i>=1;--i)
{
for(int t=1;t<=m-i;++t)
printf(" ");
for(int t=1;t<=2*i-1;++t)
printf("%c",ch);
printf("\n");
} 
for(i=2;i<=m;++i)
{
for(int t=1;t<=m-i;++t)
printf(" ");
for(int t=1;t<=2*i-1;++t)
printf("%c",ch);
printf("\n");
}

printf("%d\n",N-2*m*m+1);}
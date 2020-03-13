#include<stdio.h>
int main()
{
int n,i,m,j;
char c;
scanf("%d %c",&n,&c);
if(n<3||n>21)
{
exit(0);
}
if (n%2==0) m=n/2;
else m=n/2+1;
for(i=1;i<=m;i++) 
{
for(j=1;j<=n;j++) printf("%c",c);
printf("\n");
}
return 0;
}
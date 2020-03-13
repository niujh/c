#include<stdio.h>
int main()
{
int a,n,i=0,j=0;
scanf("%d",&n);
while(n--)
{
scanf("%d",&a);
if(a%2==0)
{i++;}
else
{j++;}
}
printf("%d %d",j,i);
return 0;
}

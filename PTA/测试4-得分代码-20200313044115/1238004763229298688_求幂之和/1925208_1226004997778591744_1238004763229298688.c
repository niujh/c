#include<stdio.h>
#include<math.h>
int main()
{
int i,n,result=0;
scanf("%d",&n);
for(i=1;i<=n;i++)
result+=pow(2,i);
printf("result = %d",result);
}
#include <stdio.h>
int main()
{
_int64 a,i,sum;
int n;
printf("请输入整数n: ");
scanf("%d",&n);
for (a=1,i=1,sum=0;i<=n;i++)
{
a=a*i; 
sum=sum+a;
}
printf("sum is %I64d\n",sum);
return 0;
} 
#include <stdio.h>
int fun(int n)
{
int sum =1;
for(int i =1;i<=n;i++)
sum *= i;
return sum;
}
void main()
{
int i,n;
float e = 0;
scanf("%d",&n);
for(i = 0;i<=n;i++)
{
e += 1.0/fun(i);
}
printf("%7.8f",e);
}
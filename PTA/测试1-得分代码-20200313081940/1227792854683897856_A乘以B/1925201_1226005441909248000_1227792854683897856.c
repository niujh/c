#include<stdio.h>
int mul(int x,int y)
{
return x*y;
}
int main()
{
int a,b,c;
scanf("%d %d",&a,&b);
c = mul(a,b);
printf("%d",c);
return 0;
}

#include<stdio.h>
double fact(int n)
int main()
{
	int m,n,a,b,c,d;double dd;
 scanf("%d%d",&m,&n);
	  a=fact(n);
	  b=fact(m);
	 d=n-m;
     c=fact(d);
	 dd=a/(b*c);
     printf("result=%.f",dd)
}	
double fact(int n);
 {
	int i;
  int sum=1;
  for(i=1;i<=n;i++)
    sum=sum*i;
  return sum;
 }

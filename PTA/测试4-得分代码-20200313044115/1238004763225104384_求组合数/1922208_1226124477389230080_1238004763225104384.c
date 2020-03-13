#include<stdio.h>
double fact (int a)
{
  doule x = 1.0;
  int i;
  if(a<=1) return 1;
  for(i=2;i<=a;i++)
    x=x*i;
  return x;
}
int m ;
int n ;
double A ;
scanf("%d %d",&m,&n);
A=fact(n)/fact(m)*fact(n-m);
printf("result=%f",&A);
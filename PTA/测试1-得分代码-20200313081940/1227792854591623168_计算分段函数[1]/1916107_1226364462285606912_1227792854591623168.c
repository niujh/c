#include<stdio.h>
int main()
{
  double x;
  scanf("%lf\n",&x);
  if(x==0) printf("f(%.1lf) = %.1lf\n",x,x);
  else printf("f(%.1lf) = %.1lf\n",x,1/x);
  return 0;
}
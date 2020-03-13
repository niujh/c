#include <stdio.h>
int main()
{
    int a,i;
    double t;
    t=1.0;
    scanf("%d",&a);
    double fact(int r);
    for(i=1;i<=a;i++)
	{
        t=t+1/fact(i);
    }
printf("%.8f",t);
    return 0;
}
double fact(int r)
{
  int i,s;
  s=1;
  for(i=1;i<=r;i++)
  s=s*i;
  return s;
}

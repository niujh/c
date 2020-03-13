
#include<stdio.h>
 
double fact(int n)
{
  int i;
  double plus=1.0;
  for(i=1;i<=n;i++) 
  {
    plus*=i;
  }
  return plus;
}
 
int main(void)
{
  int a,b;
  double c;
  scanf("%d %d",&a,&b);
  c=fact(b)/(fact(a)*fact(b-a));
  if((int)c==c) printf("result = %d",(int)c);
  else printf("result = %lf",c);
  return 0;
}


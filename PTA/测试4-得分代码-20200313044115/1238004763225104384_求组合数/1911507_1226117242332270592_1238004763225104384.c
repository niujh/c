#include<stdio.h>
double fact(int r);
int main()
{
  int a,b,t;
  scanf("%d %d",&a,&b);
   t=fact(b)/(fact(a)*fact(b-a));
   printf("result = %d\n",t);
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
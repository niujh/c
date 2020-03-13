#include<stdio.h>
double fact(int r);
int main()
{
    int a,i;
    double t;
    t=1.0;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        t=t+1/fact(i);
    }
printf("%.8f",t);
    return 0;
}
double fact(int r)
{
  int g,s;
  s=1;
  for(g=1;g<=r;g++)
  s=s*g;
  return s;
}
#include<stdio.h>

int main(){
  double x;
   scanf("%lf",&x);
  if(x==0)
     printf("f(0.0) = 0.0\n");
  else
    printf("f(%.1lf) = %.1lf\n",x,1/x);
  return 0;
}
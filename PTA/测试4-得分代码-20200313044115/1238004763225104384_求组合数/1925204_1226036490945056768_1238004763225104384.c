#include<stdio.h>
double f(int n);
int main()
{
 int a,b;
  scanf("%d %d",&a,&b);
   double c;
    c=f(b)/(f(a)*f(b-a));
     printf("result = %0.f",c);
     return 0;
      
      }



      double f(int n)
      {
       double s=1;
        for(int i=2;i<=n;i++){
         s*=i;
          }
          return s;
           
           }
#include<stdio.h>
double f(int x);
int main()
{
 int a,i;
  double s=1.0;
   scanf("%d",&a);
    for(i=1;i<=a;i++){
     s+=1/f(i);
      }
       printf("%.8lf",s);

       }

       double f(int n)
       {
       double t;
       for(int j=1;j<=n;j++){
        t*=j;
         }
         return t;
         }


             
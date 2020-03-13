#include<stdio.h>
 double fact(int n);
 int main()
 {
     double e=1;
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
         e+=1/fact(i);
     }
     printf("%.8lf",e);
     return 0;
 }

 double fact(int n)
 {
     double s=1;
     for(int i=1;i<=n;i++)
     {
        s=s*i;
     }
     return s;
 }
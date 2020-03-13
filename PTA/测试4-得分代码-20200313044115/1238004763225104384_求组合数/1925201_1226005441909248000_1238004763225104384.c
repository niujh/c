#include<stdio.h>
 double fact(int n);
 int main()
 {
     int m,n;
     double C;
     scanf("%d %d",&m,&n);
     C=fact(n)/(fact(m)*fact(n-m));
     printf("result = %.0lf",C);
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
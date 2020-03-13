#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,n;
   double s;
   s=0;
   scanf("%d",&n);
   for(a=1;a<=n;a++)
   	s=s+pow(2,a);
   	printf("result = %.0lf",s);
   
    return 0;
 } 

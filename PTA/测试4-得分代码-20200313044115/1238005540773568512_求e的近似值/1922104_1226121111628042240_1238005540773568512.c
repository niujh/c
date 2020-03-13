#include <stdio.h>

int main()
{
   int n, i;
   double e=1, k=1;
   scanf("%d", &n);
   for(i=1; i<=n; i++)
   {
       k=k/i;
       e+=k;
   }
   printf("%.8lf", e);
}

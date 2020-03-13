#include <stdio.h>
int main()
{
   int m, a[1000], i;
   int x=0, y=0;
   scanf("%d", &m);
   for(i=0; i<m; i++)
   {
       scanf("%d", &a[i]);
   }
   for(i=0; i<m; i++)
   {
       if(a[i]%2==0)
        x++;
       else
        y++;
   }
   printf("%d %d", y, x);
}

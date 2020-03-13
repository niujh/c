#include <stdio.h>
int main()
{
   int x;
   for(x=0; ; x++)
   {
       if(x%5==1&&x%6==5&&x%7==4&&x%11==10)
       break;
   }
   printf("%d", x);
}

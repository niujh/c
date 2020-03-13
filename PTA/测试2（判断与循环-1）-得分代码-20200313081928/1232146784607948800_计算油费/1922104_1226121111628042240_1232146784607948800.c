#include <stdio.h>
int main()
{
   int a, b;
   float m;
   char c;
   scanf("%d %d %c", &a, &b, &c);
   if(b==90)
   {
       if(c=='m')
       {
           m=(float)a*6.95*0.95;
       }
       else if(c=='e')
       {
           m=(float)a*6.95*0.97;
       }
   }
   else if(b==93)
   {
        if(c=='m')
       {
           m=(float)a*7.44*0.95;
       }
       else if(c=='e')
       {
           m=(float)a*7.44*0.97;
       }
   }
   else if(b==97)
   {
        if(c=='m')
       {
           m=(float)a*7.93*0.95;
       }
       else if(c=='e')
       {
           m=(float)a*7.93*0.97;
       }
   }
   printf("%.2f", m);
}

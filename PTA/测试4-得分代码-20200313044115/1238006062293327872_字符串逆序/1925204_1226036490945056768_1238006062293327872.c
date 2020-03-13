#include<stdio.h>
int main()
{char a;
 int i=80;
  int n=80;
   char z[n];
    do{
     a=getchar();
      z[i]=a;
       i--;
        }
         while(i-1!='/n');
          while(i<=80){
           putchar(z[i]);
            i++;}



            return 0;
            }
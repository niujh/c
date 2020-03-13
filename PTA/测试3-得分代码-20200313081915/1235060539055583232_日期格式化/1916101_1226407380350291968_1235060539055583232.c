#include<stdio.h>
int main()
{
   char str[10] ;
   int i;
   for (i=0;i<10;i++)
   {
       scanf("%c",&str[i]);
   }
    printf("%c%c%c%c%c",str[6],str[7],str[8],str[9],str[5]);
    printf("%c%c%c",str[0],str[1],str[2]);
    printf("%c%c%c",str[3],str[4]);
    return 0;
}
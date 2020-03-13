#include<stdio.h>

int main()
{
 int nianfen,n,i=0;
 scanf("%d",&nianfen);
 if(2000<nianfen&&nianfen<2101)
 {
  for(n=2001;n<=nianfen;n++)
  {
   if(n%400==0||(n%100!=0&&n%4==0))
   {
    printf("%d\n",n);
    i=i+1;
   }
  }
  if(i==0)
   printf("None\n");
 }
 else
  printf("Invalid year!\n");
 return 0;
}
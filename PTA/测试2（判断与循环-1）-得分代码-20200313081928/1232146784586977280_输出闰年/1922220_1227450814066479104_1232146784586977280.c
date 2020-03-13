#include<stdio.h>
int main()
{
 int i,a,b=0;
 scanf("%d",&a);
 if(a<=2000||a>2100) 
 {
  printf("Invalid year!\n");
 }
    else
 {
  for(i=2001;i<=a;i++) 
 {
  if((i%4==0&&i%100!=0)||(i%400==0))
  {
   printf("%d\n",i);
   b++;
  }
 }
  if(b==0) 
  {
   printf("None\n");
  }
 }
 return 0;
}

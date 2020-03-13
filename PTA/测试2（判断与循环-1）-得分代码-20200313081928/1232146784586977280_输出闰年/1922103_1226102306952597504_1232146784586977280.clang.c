#include<stdio.h>
int main()
{
 int i,a,b=0;
 scanf("%d",&a);
 if(a<=2000||a>2100) //要先写这个条件！注意21世纪的范围！
 {
  printf("Invalid year!\n");
 }
    else
 {
  for(i=2001;i<=a;i++) //注意i的起始值，不是2000
 {
  if((i%4==0&&i%100!=0)||(i%400==0))
  {
   printf("%d\n",i);
   b++;
  }
 }
  if(b==0) //注意这个条件的位置！
  {
   printf("None\n");
  }
 }
 return 0;
}
#include<stdio.h>
int main()
{
 int year,month,day,dayNum;
 int sign=0;
 printf("请输入月-日-年(例如：10-28-2019):");
 scanf("%d-%d-%d",&month,&day,&year);
 if((year%4==0&&year%100!=0)||year%400==0)
 {
  sign=1;
 }
 if(month>=1&&month<=12)
 { 
  switch(month)
  {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
   dayNum=31;
   break;
  case 4:
  case 6:
  case 9:
  case 11:
   dayNum=30;
   break;
  case 2:
   if(sign==1)
    dayNum=29;
   else
    dayNum=28;
   break;
  default:
   break;
  }
  if(!(day>0&&day<=dayNum))
  {
   printf("日期格式错误！\n");
   return 2;
  }
 }
 else
 {
  printf("月份格式错误！\n");
  return 1;
 }
 printf("日期格式正确\n转换后的日期格式为：%d-%02d-%02d\n",year,month,day);
 return 0;
}

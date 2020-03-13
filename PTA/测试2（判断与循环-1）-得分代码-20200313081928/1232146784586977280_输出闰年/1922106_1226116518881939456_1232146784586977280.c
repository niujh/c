#include<stdio.h>
main()
{int x,leap;
printf("请任意输入一个年份\n");
scanf("%d",&x);
if(x%400==0) leap=1;
else
{if(x%4==0&&x%100!=0) leap=1;
else leap=0;
}
switch(leap)
{case 1:printf("您输入的是闰年\n");break;
case 0:printf("您输入的不是闰年\n");break;
}
}
#include <stdio.h>
int main()
{
char ch;
int n;
int a=0,b=0,c=0,d=0;
printf("请输入10个字符：");
for(n=1;n<=10;n++)
{
scanf("%c",&ch);
if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
{
a++;
}
else if(ch == ' '|| ch == '\n')
{
b++;
}
else if(ch >= '0'&& ch<= '9')
{
c++;
}
else
{
d++;
}
}
printf("英文字母字符个数：%d\n",a);
printf("空格或回车个数：%d\n",b);
printf("数字字符个数：%d\n",c);
printf("其他字符个数：%d\n",d);
}
int main()
{
int i;
char c[6],ch;
printf(“输入一个长度为5的字符串:\n”);
for(i=0;i<5;i++)
scanf("%s",&c[i]);
for(i=0;i<2;i++)
{
ch=c[i];
c[i]=c[4-i];
c[4-i]=ch;
}
printf(“逆序后的字符串为:\n”);
for(i=0;i<5;i++)
printf("%c “,c[i]);
printf(”\n");
}

点赞
————————————————
版权声明：本文为CSDN博主「conqueror 孤神」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/weixin_43912065/article/details/90340571
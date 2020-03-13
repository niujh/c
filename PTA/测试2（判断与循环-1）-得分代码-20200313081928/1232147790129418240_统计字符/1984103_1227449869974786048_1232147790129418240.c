#include<stdio.h>
int main()
{
    char ch;
    int n;
    int a=0,b=0,c=0,d=0;
    printf("請輸入10個字符：")；
    for(n=1;n<=10;n++)
    {
        scanf("%c",&ch);
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            a++;
        }
        else if (ch == ' '||ch == '\n')
        {
            b++;
        else if (ch>='0'&&ch<='9')
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    printf("letter=:%d\n",a);
    printf("blank=:%d\n",b);
    printf("digit=:%d\n",c);
    printf("other=:%d\n",d);
}

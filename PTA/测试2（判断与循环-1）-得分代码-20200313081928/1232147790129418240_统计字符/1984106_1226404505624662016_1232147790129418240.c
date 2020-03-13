#include <stdio.h>
int main()
{
    char ch;
    int n;
    int a=0,b=0,c=0,d=0;
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
    printf("letter = %d, blank = %d, digit = %d, other = %d",a,b,c,d);
    return 0;
} 
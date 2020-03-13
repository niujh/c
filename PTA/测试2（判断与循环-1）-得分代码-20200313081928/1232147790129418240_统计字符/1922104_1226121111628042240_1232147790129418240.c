#include <stdio.h>
int main()
{
    char ch[10];
    int a=0, b=0, c=0, d=0, i=0;
    for(i=0; i<10; i++)
    {
        ch[i]=getchar();
    }
    for(i=0; i<10; i++)
    {
        if(ch[i]==' '||ch[i]=='\n')
            b++;
        else if(ch[i]>='0'&&ch[i]<='9')
            c++;
        else if(ch[i]>='a'&&ch[i]<='z')
            a++;
        else if(ch[i]>='A'&&ch[i]<='Z')
            a++;
        else
            d++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", a, b, c, d);

}

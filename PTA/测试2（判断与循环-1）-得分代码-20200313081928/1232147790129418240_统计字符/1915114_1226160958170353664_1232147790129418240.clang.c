#include<stdio.h>
int main(void)
{
    int i,countchar=0,countnore=0,countnum=0,counto=0;
    char ch;

    for(i=1;i<=10;i++){
        ch=getchar();
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
            countchar++;
        else if((ch=='\n')||(ch==' '))
            countnore++;
        else if(ch>='0'&&ch<='9')
            countnum++;
        else
            counto++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",countchar,countnore,countnum,counto);
    return 0;
}
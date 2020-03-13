#include<stdio.h>

int main()
{
    int letter=0,blank=0,digit=0,other=0;
    char c;
    for(int i=0;i<10;i++)
    {   c=getchar();
        if(((c<='z')&&(c>='a'))||((c<='Z')&&(c>='A')))
        letter++;
        else if((c==' ')||(c=='\n'))
        blank++;
        else if((c<='9')&&(c>='0'))
        digit++;
        else
        other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
    return 0;


}
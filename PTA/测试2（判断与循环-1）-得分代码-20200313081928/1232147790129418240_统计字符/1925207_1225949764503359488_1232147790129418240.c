#include<stdio.h>
int main()
{
    char str[10];
    int i=0;
    int blank,digit,letter,other;
    blank=digit=letter=other=0;
    while(i<10)
    {
        str[i++]=getchar();
    }
    for(i=0;i<10;i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
            letter++;
        else if(str[i]=='\n'||str[i]==' ')
            blank++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
    return 0;
}
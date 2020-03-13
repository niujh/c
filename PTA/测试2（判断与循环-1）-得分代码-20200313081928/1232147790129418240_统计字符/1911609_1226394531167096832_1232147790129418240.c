#include<stdio.h>
int main()
{
    char c;
    int letter=0,blank=0,digit=0,other=0,n;
    for(n = 0;n < 10;n++)
    {
        scanf("%c",&c);
        if((c >= 'a' && c <='z')||((c >= 'A' && c <='Z')))letter++;
        else if(c >= '0' && c <= '9')digit++;
        else if(c == ' '||c == '\n')blank++;
        else other++;
    }
    printf("letter = %d,blank = %d,dight = %d,other = %d",letter,blank,dight,other);
}
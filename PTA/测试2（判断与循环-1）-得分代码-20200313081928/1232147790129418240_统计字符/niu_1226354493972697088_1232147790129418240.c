#include<stdio.h>

int main()
{
    int letter = 0, blank = 0, digit = 0, other = 0;
    char c;
    for(int i=0; i<10; i++)
    {
        scanf("%c", &c);
        if(c>='a' && c<='z' || c>='A' && c<='Z')
            letter++;
        else if(c>='0' && c <= '9')
            digit++;
        else if(c == ' ' || c == '\n')
            blank++;
        else
            other++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}
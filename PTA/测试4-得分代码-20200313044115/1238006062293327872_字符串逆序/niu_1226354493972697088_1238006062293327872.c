#include<stdio.h>

void _()
{
    char c;
    scanf("%c", &c);
    if(c != '\n')
    {
        _();
        printf("%c", c);
    }
}

int main()
{
    _();
    return 0;
}
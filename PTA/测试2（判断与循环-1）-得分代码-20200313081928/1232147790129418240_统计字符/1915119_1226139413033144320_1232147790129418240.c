#include<stdio.h>
int main(void)
{
    char get;
    int letter = 0, blank = 0, digit = 0, other = 0, n = 1;
    while (n <= 10)
    {
        get = getchar();
        if (get >= 'a' && get <= 'z')
            letter++;
        else if (get >= 'A' && get <= 'Z')
            letter++;
        else if (get == ' ' || get == '\n')
            blank++;
        else if (get >= '0' && get <= '9')
            digit++;
        else
            other++;
        n++;
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d", letter, blank, digit, other);
    return 0;
}
#include <stdio.h>

int request (int num);

int main(void)
{
    int num = 0;
    while ( request(num) ) {
        num++;
    }
    printf("%d", num);
    return 0;
}

int request (int num)
{
    if ( ((num % 5) == 1) && ((num % 6) == 5) && ((num % 7) == 4) && ((num % 11) == 10) ) {
        return 0;
    } else {
        return 1;
    }
}

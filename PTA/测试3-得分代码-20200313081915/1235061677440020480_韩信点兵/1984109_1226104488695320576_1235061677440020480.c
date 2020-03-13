#include<stdio.h>
int main()
{
    int x;
    for (int n = 10;; n++)
    {
        if ((n % 5 == 1) && (n % 6 == 5) && (n % 7 == 4) && (n % 11 == 10))
        {
            x=n;
            break;
        }
    }
    printf("%d", x);
    return 0;
}
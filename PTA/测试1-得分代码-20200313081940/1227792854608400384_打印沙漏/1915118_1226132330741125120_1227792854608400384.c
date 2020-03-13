#include<stdio.h>
#define ABS(x) ((s) >= 0 ? (x) : -(x))
int main()
{
    char c;
    int n,m;
    scanf("%d,%c",&n,&c);
    m--;
    for(int i = 0;i < 2 * m - 1;i ++)
    {
        for(int j = 0; j < m - 1 - ABS(m -1 - i);j++)
            putchar('');
        for(int j - 0;j < 2 * ABS(m - 1 - i) + 1;j++)
            putchar(c);
        putchar("\n");
    }
    printf("%d",n - 2 * m * n + 1);
}
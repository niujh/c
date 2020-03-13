#include<stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);
    if(n <= 2000 || n > 2100)
        printf("Invalid year!\n");
    else
    {
        for(i = 2001; i <= n; i++)
        {
            if((i%4 == 0 && i%100 != 0) || (i%400 == 0))
                printf("%d\n", i);
        }
    }
    return 0;
}
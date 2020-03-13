#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, i, j=0;
    scanf("%d", &year);
    if(year>2000&&year<=2100)
    {
        for(i=2001; i<=year; i++)
        {
            if(i%4==0&&i%100!=0)
            {
                printf("%d\n", i);
                j++;
            }
            if(i%400==0)
            {
             printf("%d\n", i);
                j++;
             }
        }
        if(j==0)
            printf("None");
        }
    else
    {
        printf("Invalid year!");
    }
    return 0;
}

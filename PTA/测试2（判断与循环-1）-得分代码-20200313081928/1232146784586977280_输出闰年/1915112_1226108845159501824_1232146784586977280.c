#include <stdio.h>
int main ()
{
    int n,i,count = 0;
    scanf ("%d",&n);
    if (n <= 2000 || n > 2100)
        printf ("Invalid year!\n");
    else
    {
        for (i = 2001;i <= n;i++)
        {
            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
            {
                printf ("%d\n",i);
                count++;
            }   
        }
        if (count == 0)
            printf ("None\n");
    }
    return 0;
}
#include <stdio.h>
int main ()
{
    int m,n;
    int sum,flag = 1;
    scanf ("%d %d",&m,&n);
    for (int i = m;i <= n;i++)
    {
        sum = 1;
        for (int j = 2;j < i;j++)
        {
            if (i % j == 0)
            sum += j;
        }
        if ( sum == i)
        {
            flag = 0;
            printf ("%d = 1",i);
            for (int k = 2;k < i;k++)
            {
                if (i % k == 0)
                printf (" + %d",k);
            }
            printf ("\n");
        }
    }
    if (flag)
    printf ("None\n");
    return 0;
}
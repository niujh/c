#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    int i, j, k;
    int s, p, flag = 0;
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++)
    {
        s = 0;
        for (j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
                s += j;
        }
        if (s == i)
        {
            flag = 1;
            printf("%d = ", i);
            p = 0;
            for (j = 1; j <= i / 2; j++)
            {
                if (i % j == 0)
                {
                    p += j;
                    if (p != i)
                        printf("%d + ", j);
                    else
                      	 printf("%d\n", j);
                }
            }
        }
    }
    if (flag == 0)
        printf("None\n");
    return 0;

}

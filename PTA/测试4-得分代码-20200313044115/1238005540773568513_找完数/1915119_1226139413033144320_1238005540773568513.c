#include<stdio.h>
int main()
{
    int i, j, k, sum, n, num;
    int none = 1;
    int a[1000];
    scanf("%d %d", &i, &j);
    for (n = i; n <= j; n++)
    {
        num = 0, sum = 0;
        for (k = 1; k <= n / 2; k++)
        {
            if (n % k == 0)
            {
                a[num] = k;
                num++;
            }
        }
        for (k = 0; k < num; k++)
        {
            sum += a[k];
        }
        if (sum == n)
        {
            none = 0;
            printf("%d = 1 +", n);
            for (k = 1; k <= num-1; k++) {
                if (k == 1) {
                    printf(" %d", a[k]);
                }
                else {
                    printf(" + %d", a[k]);
                }
            }
            printf("\n");
        }
    }
    if (none == 1) {
        printf("None\n");
    }
    return 0;
}

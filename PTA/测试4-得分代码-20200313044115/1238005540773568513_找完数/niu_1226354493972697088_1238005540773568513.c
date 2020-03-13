#include<stdio.h>

int _(int n)
{
    int sum = 0;
    for(int i=1; i<n; i++)
    {
        if(n % i == 0)
            sum += i;
    }
    if(sum == n)
    {
        printf("%d = 1", n);
        for(int i=2; i<n; i++)
        {
            if(n % i == 0)
                printf(" + %d", i);
        }
        printf("\n");
        return 1;
    }
    return 0;
}

int main()
{
    int s, e, flag = 0;
    scanf("%d %d", &s, &e);
    for(int i=s; i<=e; i++)
    {
        flag = _(i) || flag;
    }    
    if(! flag)
    {
        printf("None\n");
    }
    return 0;
}
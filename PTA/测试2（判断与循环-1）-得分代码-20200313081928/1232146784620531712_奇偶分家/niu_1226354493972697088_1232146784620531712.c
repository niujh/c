#include<stdio.h>

int main()
{
    int n, t, odd=0, even=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &t);
        if(t%2)
            odd++;
        else
            even++;
    }
    printf("%d %d", odd, even);
    return 0;
}
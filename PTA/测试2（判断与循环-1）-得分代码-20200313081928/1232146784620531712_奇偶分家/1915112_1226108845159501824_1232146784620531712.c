#include <stdio.h>
int main ()
{
    int n,x,i;
    int o = 0,q = 0;
    scanf ("%d",&n);
    for (i = 0;i < n;i++)
    {
        scanf ("%d",&x);
        if (x % 2 == 0)
            o++;
        else
            q++;
    }
    printf ("%d %d",q,o);
    return 0;
}
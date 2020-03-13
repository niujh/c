#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10005];
    int i;
    for(i=1;i<=10005;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==250)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}
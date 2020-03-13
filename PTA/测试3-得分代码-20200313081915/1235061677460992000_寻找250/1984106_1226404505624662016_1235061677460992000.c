#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10005];
    int i;
    for(i=1;i<=10005;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==250)
        {
            break;
        }
    }
    printf("%d",i);
    return 0;
}


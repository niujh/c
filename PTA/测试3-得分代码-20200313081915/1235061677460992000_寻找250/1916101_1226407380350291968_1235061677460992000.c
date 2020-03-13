#include<stdio.h>
int main()
{
    int a[10005];
    int i;
    for (i=1;i<=10005;i++)
    {
        scanf("%d",&a[i]);
        if (a[i]==250)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
   
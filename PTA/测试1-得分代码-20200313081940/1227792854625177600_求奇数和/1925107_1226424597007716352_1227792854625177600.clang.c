#include <stdio.h>
int main()
{
    int a[10001];
    int sum=0;
    int i,j;
    for(i=0;; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            if(a[i]%2==1)
                sum+=a[i];
        }
        else
            break;
    }
    printf("%d",sum);
}

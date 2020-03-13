#include<stdio.h>
int main()
{
    int i,n;
    for(i = 1;;i++)
    {
        scanf("%d",&n);
        if(n == 250)
        {
            printf("%d",i);
            break;
        }
    }
}
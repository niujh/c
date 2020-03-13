#include<stdio.h>
int main()
{
    int a,i;
    i=0;
    while(1)
    {
        scanf("%d",&a);
        i++;
        if(a==250)
        break;
    }
    printf("%d",i);
    return 0;
}

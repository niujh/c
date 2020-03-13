#include<stdio.h>
int main()
{
    int x;
    for(int i=1;i<100000;i++)
    {
        scanf("%d",&x);
        if(x==250)
        {
            printf("%d",i);
            break;
        }   
    }
    return 0;
}
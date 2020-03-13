#include<stdio.h>
void main()
{
    int x,y;
    y=0;
    scanf("%d",&x);
    while(x>0)
    {
        y+=x;
        scanf("%d",&x);
    }
    printf("%d",y);

}
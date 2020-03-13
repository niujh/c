#include<stdio.h>
int main()
{
    int c,i=1;
    while(scanf("%d",&c)!=EOF)
    {
        if(c==250)
        {
            printf("%d",i);
            break;
        }
        i++;
    }
    return 0;
}
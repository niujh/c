
#include<stdio.h>

int main()
{
    int x,t=0;
    while(1)
    {
        scanf("%d",&x);
        t++;
        if(x==250){
            printf("%d\n",t);
            break;
        }
    }
    return 0;
}

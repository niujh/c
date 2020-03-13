#include<stdio.h>
int main()
{
    int sg=0,st=0,time=1,t;
    scanf("%d",&t);
    for(time;time<=t;time++)
    {
        if(st>sg)
        {
            for(int i=0;i<30;i++)
            {
                sg+=3;
                st+=0;
                time++;
                if(time>t)
                break;
            }
        }
        else
        {
            for(int i=0;i<10;i++)
            {
                sg+=3;
                st+=9;
                time++;
                if(time>t)
                break;
            }
        }
        time--;
    }
    if(sg>st)
    printf("@_@ %d",sg);
    else if(sg==st)
    printf("-_- %d",st);
    else
    printf("^_^ %d",st);
    return 0;
    
}
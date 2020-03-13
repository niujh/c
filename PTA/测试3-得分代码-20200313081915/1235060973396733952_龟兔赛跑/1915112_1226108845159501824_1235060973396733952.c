#include <stdio.h>
int main()
{
    int T=0;
    int w=0;
    int t=0,t1=0,t2=0;
    scanf("%d",&t);
    while(t1<t&&t>0)
    {
        if(t1%10==0&&T>w)
        {
            t2=t1+30;
            while(t1<t2&&t1<t)
            {
                w+=3;
                t1++;
            }
        }
        else
        {
            t2=t1+10;
            while(t1<t2&&t1<t)
            {
                w+=3;
                T+=9;
                t1++;
            }
        }
    }
    if(w>T)
    {
        printf("@_@ %d",w);
    }
    else
        if(w==T)
        {
            printf("-_- %d",w);
        }
    else
        {
            printf("^_^ %d",T);
        }
    return 0;
}
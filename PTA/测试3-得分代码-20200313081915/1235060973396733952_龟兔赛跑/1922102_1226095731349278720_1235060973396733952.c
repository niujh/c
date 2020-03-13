#include<stdio.h>
int main()
{
    int T,w=0,r=0,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        w+=3;
        r+=9;
        if(i%10==0&&r>w)
        {
            if(T>=30+i)
            {
                w+=90;
                i+=30;
            }
            else
            {
                w+=(T-i)*3;
                i=i+(T-i);
            }
        }
    }
    if(w==r)
    {
        printf("-_- %d",r);
    }
    else if(w>r)
    {
        printf("@_@ %d",w);
    }
    else
    {
        printf("^_^ %d",r);
    }
    return 0;
}
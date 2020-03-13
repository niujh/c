#include<stdio.h>
int main()
{
    int s1=0,s2=0;
    int T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        s1+=3;
        s2+=9;
        if(i%10==0&&s2>s1)
        {
            if(T-i>=30)
            {
                s1+=90;
                i=i+30;

            }
            if(T-i>0&&T-i<30)
            {
                s1+=3*(T-i);
                i=T;
            }
        }
    }
    if(s2>s1)
    {
        printf("^_^ %d",s2);
    }
    else if(s2<s1)
    {
        printf("@_@ %d",s1);
    }
    else printf("-_- %d",s2);
    return 0;
}
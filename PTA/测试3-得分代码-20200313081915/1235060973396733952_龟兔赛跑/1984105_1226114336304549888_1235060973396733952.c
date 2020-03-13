#include<stdio.h>
int main()
{
    int time,u=0,a=1,b=0,j=0;
    scanf("%d",&time);
    for(int i=1;i<=time;i++)
    {
        u=u+3;
        if(a)
        {
            b=b+9;
        }
        if(i%10==0&&b>u)
        {
            a=0;
        }
        if(a==0)
        {
            j++;
        }
        if(j%30==0)
        {
            a=1;
        }
    }
    if(u>b)
    {
        printf("^_^ %d",b);
        return 0;
    }
    else if(u==b)
    {
        printf("-_- %d",b);
        return 0;
    }
    else
    {
        printf("@_@ %d",u);
        return 0;
    }
}

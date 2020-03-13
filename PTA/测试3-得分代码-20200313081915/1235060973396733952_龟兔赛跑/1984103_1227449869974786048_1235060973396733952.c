#include <stdio.h>
#define speed_r 9
#define speed_t 3
int main()
{
    int sum_r=0,sum_t=0,n,flag=1;
    int time1=0,time2=0;
    scanf("%d",&n);
    for(int min=1;min<=n;min++)
    {
        if(time2==30)
        {
            flag=1;
            time2=0;
        }
        if(time1==10)
        {
            if(sum_r>sum_t) flag=0;
            else flag=1;
            time1=0;
        }
        sum_t+=3;
        if(flag==1)
        {    
            sum_r+=9;
            time1++;
        }
        else time2++;
    }
    if(sum_r<sum_t) printf("@_@ %d",sum_t);
    else if(sum_t<sum_r) printf("^_^ %d",sum_r);
    else printf("-_- %d",sum_t);
}
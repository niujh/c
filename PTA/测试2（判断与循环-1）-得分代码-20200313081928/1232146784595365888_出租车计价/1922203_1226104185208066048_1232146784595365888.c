#include<stdio.h>
int main()
{
    double km;
    int m=0;
    double money=0;
    int yu;
    scanf("%lf %d",&km,&m);
    if(m<5)
    {
        if(km<=3)
        money=10;
        else if(km<=10)
        money=10+(km-3)*2;
        else
        money=10+7*2+(km-10)*3;
    }
        else
        {
            if(km<=3)
            money=10+(m/5)*2;
            else if(km<=10)
            money=10+(km-3)*2+(m/5)*2;
            else
        money=10+7*2+(km-10)*3+(m/5*2);
    }
    printf("%1.lf\n",money);
    return 0;
}
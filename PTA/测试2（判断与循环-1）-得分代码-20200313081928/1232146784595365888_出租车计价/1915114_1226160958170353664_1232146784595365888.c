#include<stdio.h>
float routefee(float route);
int timefee(float time);
int main(void)
{
    float route,time,fee;
    int temp,endfee;

    scanf("%f",&route);
    scanf("%f",&time);
    fee=routefee(route)+timefee(time);
    temp=fee;
    if((fee+0.5)>=(temp+1))
        endfee=temp+1;
    else
        endfee=temp;
    printf("%d",endfee);
    return 0;
}
float routefee(float route)
{
    if(route<=3)
        return 10.0;
    else if(route<=13)
        return 10.0+(route-3.0)*2.0;
    else
        return 30.0+(route-13.0)*3;
}
int timefee(float time)
{
    int T;

    T=time;
    return 2*(T/5);
}
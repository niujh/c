#include<stdio.h>
int main()
{
    int time=0;
    double price1=0,price2=0,price,lc;
    scanf("%lf %d",&lc,&time);
    if(lc<=3){
        price1=10;
    }
    else if(lc<=10){
        price1=10+(lc-3)*2.0;
    }
    else{
        price1=24+(lc-10)*3.0;
    }
    price2=time/5*2;
    price=price1+price2;
    printf("%.0f\n",price);
    return 0;
}
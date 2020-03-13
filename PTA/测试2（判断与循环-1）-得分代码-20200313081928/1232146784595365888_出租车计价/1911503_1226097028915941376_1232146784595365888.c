#include <stdio.h>
int main()
{

    double lc;
    int time;
    double price1,price2,price;
    scanf("%lf %d",&lc,&time);
    if(lc<=3)
    {
        price1=10;
    }
    else if(lc<=10)
    {
        price1=10+(lc-3)*2.0;
    }
    else
    {
        price1=10+(10-3)*2.0+(lc-10)*3.0;
    }
    
    price2=time/5*2.0;
    price=price1+price2;
    printf("%.0f",price);

    return 0;

}
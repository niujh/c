#include<stdio.h>
int main()
{
    float mile=0;
    int min=0;
    float price,price1,price2;
    scanf("%f %d",&mile,&min);
    if(mile<=3){
        price1 = 10;
    }
    else if(mile<=10){
        price1 = 10+(mile-3)*2.0;
    }
    else if(mile>10){
        price1 = 10+(10-3)*2.0+(mile-10)*3.0;
    }
    price2=min/5*2;
    price=price1+price2;
    printf("%.0f\n",price);
    return 0;

}
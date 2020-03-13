#include <stdio.h>
int main()
{
    int a,b;
    char c;
    double price,d;
    scanf("%d %d %c",&a,&b,&c);
    switch(b)
    {
        case 90:d=a*6.95;break;
        case 93:d=a*7.44;break;
        case 97:d=a*7.93;break;
    }
    if(c=='m')
    {
        price=d*(1-0.05);
    }
    else
    {
        price=d*(1-0.03);
    }
    printf("%.2f",price);
    return 0;

}
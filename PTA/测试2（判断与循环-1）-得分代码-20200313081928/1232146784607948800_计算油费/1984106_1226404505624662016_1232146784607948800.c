#include<stdio.h>
int main()
{
    int a,b;
    char c;
    double price;
    float r,R;
    scanf("%d %d %c",&a,&b,&c);
    switch(b)
    {
        case(90):r=6.95;break;
        case(93):r=7.44;break;
        case(97):r=7.93;break;
    }
    switch(c)
    {
        case('m'):R=0.95;break;
        case('e'):R=0.97;break;
    }
    price=a*r*R;
    printf("%.2lf\n",price);
    return 0;
}
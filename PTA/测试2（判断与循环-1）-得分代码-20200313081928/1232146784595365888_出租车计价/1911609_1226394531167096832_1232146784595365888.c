#include<stdio.h>
int main()
{
    float x,y1,y2,y;
    int t,y3;
    scanf("%f %d",&x,&t);
    if(x <= 3)y1 = 10;
    else if(x <= 10)y1 = 2*x + 4;
    else y1 = 3*x - 6;
    y2 = 2 * (t / 5);
    y = y1+y2;
    y3 = y;
    if(y -y3 >= 0.5)y3 = y3 + 1;
    printf("%d",y3);
}

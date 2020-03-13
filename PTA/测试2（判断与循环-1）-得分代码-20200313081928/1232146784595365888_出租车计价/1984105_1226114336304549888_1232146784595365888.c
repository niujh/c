#include<stdio.h>
int main()
{
    int m,x,y,q;
    float n;
    scanf("%d %f",&m ,&n);
    if(m<=3)
    {
        x=10;
    }
    if(m<=10&&m>3)
    {
        x=10+(m-3)*2+0.5;
    }
    if(m>10)
    {
        x=24+(m-10)*3+0.5;
    }
    y=n/5*2;
    q=x+y;
    printf("%d\n",q);
    return 0;
}
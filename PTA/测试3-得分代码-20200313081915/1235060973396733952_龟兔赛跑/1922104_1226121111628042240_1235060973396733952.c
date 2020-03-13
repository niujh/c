#include <stdio.h>
int main()
{
    int x=0, y=0, T, a, b, i;
    scanf("%d", &T);
    a=T/10;
    b=T%10;
    for(i=0; i<a; i++)
    {
        x+=3*10;
        y+=9*10;
        if(x<=y)
        {
                x+=90;
                i=i+3;
        }
    }
    if(i>a)
        x=x-(i-a)*30;
    x+=3*b;
    y+=9*b-90;
    if(x>y)
        printf("@_@ %d", x);
    else if(x<y)
        printf("^_^ %d", y);
    else
        printf("-_-" );
}

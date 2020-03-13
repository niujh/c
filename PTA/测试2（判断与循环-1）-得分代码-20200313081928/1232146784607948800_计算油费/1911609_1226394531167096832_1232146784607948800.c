#include<stdio.h>
int main()
{
    int n,m;
    double y;
    char c;
    scanf("%d %d %c",&n,&m,&c);
    if(c == 'm')
    {
        if(m == 90)y = 0.95*6.95*n;
        if(m == 93)y = 0.95*7.44*n;
        if(m == 97)y = 0.95*7.93*n;
    }
    if(c == 'e')
    {
        if(m == 90)y = 0.97*6.95*n;
        if(m == 93)y = 0.97*7.44*n;
        if(m == 97)y = 0.97*7.93*n;
    }
    printf("%.2f",y);
}

#include <stdio.h>
int main()
{
    float s,m;
    int t;
    scanf("%f %d", &s, &t);
    if(s<=3&&t<5)
    {
     m=10;
    }
    else if(s<=3&&t>=5)
    {
        m=10+t/5*2;
    }
    else if(s>3&&s<=10&&t<5)
    {
        m=10+(s-3)*2;
    }
    else if(s>3&&s<=10&&t>=5)
    {
        m=10+(s-3)*2+t/5*2;
    }
    else if(s>10&&t<5)
    {
        m=10+14+(s-10)*3;
    }
    else
    {
        m=10+14+(s-10)*3+t/5*2;
    }
    printf("%.0f", m);
}

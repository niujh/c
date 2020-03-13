#include<stdio.h>
int main(void)
{
    int a,b;
    char c;
    double pay;
    scanf("%d%d\x20%c",&a,&b,&c);
    if(b==90)
        pay=a*6.95;
    else if(b==93)
        pay=a*7.44;
    else
        pay=a*7.93;
    
    if(c=='m') pay*=0.95;
    else pay*=0.97;

    printf("%.2f\n",pay);
    return 0;
}
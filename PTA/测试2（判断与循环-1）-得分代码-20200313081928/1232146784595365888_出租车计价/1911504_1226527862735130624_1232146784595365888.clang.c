#include<stdio.h>
int main(void)
{
    int b,c,d,i;
    float a;
    scanf("%f %d",&a,&b);
    if(a<=3)
        c=10;
    if(a>3&&a<=10)
        c=10+(a-3)*2;
    if(a>10)
        c=24+(a-10)*3;
    
    if(b<5)
        d=0;
    if(b>=5)
        d=b/5*2;
i=c+d;
if(i-0.5==i)
     printf("%d",i+1);
else
     printf("%d",i);
return 0;
}
#include<stdio.h>
int main()
{
    int t,i,z;
    scanf("%d",&t);
    i=t%90;
    z=t/90;
    if(i>0&&i<10)
    printf("^_^ %d",t*9+z*270);

    if(i>10&&i<30)
    printf("^_^ %d",90+z*270);
    
    if(i==30)
    printf("-_- %d",90+z*270);

    if(i>30&&i<45)
    printf("@_@ %d",i*3+z*270);

    if(i==45)
    printf("-_- %d",z*270+3*i);

    if(i>45&&i<50)
    printf("^_^ %d",z*270+90+(i-40)*9);

    if(i>45&&i<60)
    printf("^_^ %d",z*270+180);

    if(i>60&&i<90)
    printf("@_@ %d",z*270+i*3);

    if(i==0)
    printf("-_- %d",z*270);
}

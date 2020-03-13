#include<stdio.h>
int main(void)
{
    float k,c,c1;
    int time,c2;
    scanf("%f%d",&k,&time);
    if(k<=3)
        c1=10;
    else if(k<=10)
        c1=10+((k-3)*2);
    else
        c1=10+((10-3)*2)+((k-10)*3);
    if(time>=5)
        c2=time/5*2;
	else
		c2=0;
    c=c1+c2;
    printf("%.0f",c);
    return 0;
}

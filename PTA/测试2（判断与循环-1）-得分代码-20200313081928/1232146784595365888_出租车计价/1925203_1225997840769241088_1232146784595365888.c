#include<stdio.h>
#include<math.h>
int main(void)
{
    double s,t,p1,p2;
    int p;
scanf("%lf%lf",&s,&t);
if(s<= 3){p1 = 10;}

else if(s>3 && s<=10){p1=10 + 2*(s-3);}

else{p1=24+3*(s-10);}

if(t<5){p2=0;}
else {p2=2;}

p=(int)(p1+p2+0.5);

printf("%d\n",p);













return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{double mile=0;
int time=0;
double p,p1,p2;
scanf("%lf%d",&mile,&time);
if(mile<=3){
    p1=10;
}
else if(mile<=10)
{p1=10+(mile-3)*2;
}
else{p1=10+(10-3)*2+(mile-10)*3;
}
p2=time/5*2;
p=p1+p2;
printf("%.0f\n",p);
system("pause");
}
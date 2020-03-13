#include<stdio.h>
#include<math.h>
int main()
{
int a,b;
char c1;
double p;
scanf("%d%d",&a,&b);
scanf(" %c",&c1);
if(b==90){
    if(c1=='m'){p=a*6.95*0.95;}
    else{p=a*6.95*0.97;}
}

else if(b==93){
    if(c1=='m'){p=a*7.44*0.95;}
    else{p=a*7.44*0.97;}
}

else if(b==97){
    if(c1=='m'){p=a*7.93*0.95;}
    else{p=a*7.93*0.97;}
}
printf("%.2f\n",p);



    return 0;
}
#include <stdio.h>
int main(){
int a,b;
double r,s;
char c;
scanf("%d%d %c",&a,&b,&c);
switch(b){
case 90:r=a*6.95;break;
case 93:r=a*7.44;break;
case 97:r=a*7.93;break;
}
if(c=='m'){
s=r*(1-0.05);
}
else{
s=r*(1-0.03);
}
printf("%.2f",s);
return 0;
}
#include<stdio.h>

int main()
{
int t,x,y;
int temp=0;
scanf("%d",&t);
x=t/40;
y=t%40;
if(y<=10)
temp=6*y-30*x;
else
temp=60-3*(y-10)-30*x; 
if(temp>0){
printf("^_^ ");
printf("%d",3*t+temp);
}
else if(temp<0){
  printf("@_@ ");
  printf("%d",3*t);
 }
 else{
  printf("-_- ");
  printf("%d",3*t);
 } 
return 0;
}
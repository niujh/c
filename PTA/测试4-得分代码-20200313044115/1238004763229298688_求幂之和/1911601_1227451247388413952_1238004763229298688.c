#include <stdio.h>
#include <math.h>
int main(){
int x,i;
int y;
scanf("%d",&x);
y=0;
for(i=1;i<=x;i++)
y=y+pow(2,i);
printf("result = %d",y);
return 0;

}




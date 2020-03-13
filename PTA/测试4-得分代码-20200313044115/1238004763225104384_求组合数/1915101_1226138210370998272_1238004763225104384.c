#include<stdio.h>
double fact(int n){
int i;
double x = 1;
for(i = 1;i <= n;i++){
x = x*i;
}
return x;
}
int main(void)
{
int m,n;
scanf("%d %d",&m,&n);
double r;
r = fact(n)/fact(m)/fact(n-m);
printf("result = %.0f",r);
return 0;
}
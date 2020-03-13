#include<stdio.h>
#include<math.h>
double fact(double a)
{
double z;
for(z=1;a>1;a--){
z=z*a;
}
return z;
}
int main()
{
int n;
double sum,t;
scanf("%d",&n);
for(sum=1.0,t=1.0;t<=n;t++){
sum=sum+1.0*1/fact(t);
}
printf("%.8f",sum);
return 0;
}
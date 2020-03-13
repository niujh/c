#include <stdio.h>
int main () 
{ 
double eps,a=2,i,b=1;
scanf("%lf",&eps);
for ( i=1; b>eps; i++)
{ 
b *= i /(2*i+1);
a+= b*2 ; 
}
printf("PI = %.5f",a); 
return 0 ;
}
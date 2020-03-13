#include <stdio.h>
double factorial(double n);
int main() 
{
    double n, a, m; 
  
    scanf("%lf%lf",&m,&n);
    a=factorial(n)/(factorial(n-m)*factorial(m));
    printf("result = %.0lf",a);
  
    return 0;
}
double factorial(double n) 
{
    double i, fact=1;
  
    for(i=1;i<=n;i++)
        fact=fact*i;
 
    return fact;
}    

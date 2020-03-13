#include <stdio.h>
double fact(int n);
int main()
{
int i, n, m;
double n1, m1, o1;
printf("Enter m and n (m<=n):");
scanf ("%d%d",&m, &n);
n1=fact(n);
m1=fact(m);
o1=fact(n-m);
printf ("The result is %f" , n1/(m1*o1));
}
double fact(int n)
{
int i;
double product;
product=1;
for(i=1;i<=n;i++){
product = product*i;   
}
return product;
}
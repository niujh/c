#include <stdio.h>
int main()
{
double term,p,b;
p=1.0,term=1.0;
for(b=2.0;b<=1000000.0;b++)
{
if((int)b%2==0)
{
p-=1.0/(2.0*b-1.0);
}
else
{
p+=1.0/(2.0*b-1.0);
}
}
p=p*4;
printf("p=%f\n",p);
system("pause");
return 0;
}
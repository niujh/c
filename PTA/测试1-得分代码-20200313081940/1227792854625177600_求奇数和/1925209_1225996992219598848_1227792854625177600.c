#include <stdio.h>
int main()
{
int a=0;
int b=0;
while(a>=0)
{
scanf("%d",&a);
if(a%2==1)
{
b=b+a;
}
else{b=b+0;}
}
printf("%d",b);
return 0;
}
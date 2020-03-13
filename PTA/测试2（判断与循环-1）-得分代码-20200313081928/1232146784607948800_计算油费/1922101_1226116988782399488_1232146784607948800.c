#include<stdio.h>
int main()
{
int a, b;
double n;
char c;
scanf("%d%d\x20%c",&a,&b,&c);
 
if(b == 90){n = a*6.95;}
else
if(b == 93){n = a*7.44;}
else{n = a*7.93;}
 
if(c == 'm'){n*=0.95;}
else{n*=0.97;}
 
printf("%.2f\n",n);
 
return 0;
}
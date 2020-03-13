#include <iostream>
#include <stdio.h>
using namespace std;
#define pi 3.1415926
int main()
{
   double h,r;
   cin>>r>>h;
   double c,s,v1,v2;
   c=2*pi*r;
   s=pi*r*r;
   v1=2*pi*r*h;
   v2=pi*r*r*h;
    printf("%.2f %.2f %.2f %.2f\n",c,s,v1,v2);
    return 0;
}

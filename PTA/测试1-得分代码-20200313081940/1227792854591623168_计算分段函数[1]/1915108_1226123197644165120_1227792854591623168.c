#include<stdio.h>
int main()
{ 
	float a,b;
    scanf("%f",&a);
    if(a!=0){ 
    b=1/a;
	} 
    else
	{
   b=0;
  
	} 
		printf("f(%.1f) = %.1f",a,b);
    return 0;
} 

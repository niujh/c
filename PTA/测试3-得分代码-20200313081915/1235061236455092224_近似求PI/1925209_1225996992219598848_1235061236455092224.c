#include<stdio.h>

int main() 
{
	double eps;
	scanf("%le", &eps);
	double sum=1;
	double t=1;
	int i;
	for( i=1;t>eps;i++){
        t = t*i/(2*i+1);
        sum += t;
    }
	printf("PI = %.5f\n",sum*2);
    return 0;
}
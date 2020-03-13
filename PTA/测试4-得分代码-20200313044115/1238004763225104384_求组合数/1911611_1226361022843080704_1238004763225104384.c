#include<stdio.h>
double fact (int n){
    	int x=1,i;
        	if(n<=1)
             return 1;
             	for(i=2;i<=n;i++)
                 	x=x*i;	return x;}
                     int main (void)
                     {
                         	double result;
                             	int m,n,d;
                                 	double x,y,z;
                                     	scanf("%d %d",&m,&n);
                                         	d=n-m;
                                             	x=fact(m);
                                                 	y=fact(n);
                                                     	z=fact(d);
                                                         	result = y/(x*z);
                                                             	printf("result = %.f",result);
                                                                 	return 0;
                                                                     }



#include<stdio.h>
int main()
{
	double fact(int n);
    	int m,n;
        	scanf("%d%d",&m,&n);
            	double result;
                	result=fact(n)/(fact(m)*fact(n-m));
                    	printf("result = %.0lf",result);
                        	return 0;
                            }
                            double fact(int n)
                            {
                            	double z;
                                	if(n==1||n==0)
                                    	z=1;
                                        	else
                                            	z=fact(n-1)*n;
                                                	return(z);
                                                    }
                                                    
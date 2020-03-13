#include<stdio.h>
int main()
{
	int n;
    	scanf("%d",&n);
        	double fm = 1, sum=1;
            	
                	int i;
                    	for(i=1; i<=n; i++)
                        	{
                            		fm *= i;
                                    		sum += 1.0/fm;
                                            	}
                                                	
                                                    	printf("%.8lf\n",sum);
                                                        	return 0;
                                                            }
                                                            
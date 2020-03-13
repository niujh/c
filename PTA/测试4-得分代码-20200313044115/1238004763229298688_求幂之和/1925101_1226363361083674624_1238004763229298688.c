#include<stdio.h>
#include<math.h>
int main()
{
	int sum = 0;
    	int n;
        	int i;

            	scanf("%d",&n);
                	for(i = 1; i <= n; i++)
                    		{
                            			sum = sum + (int)pow(2.0,i);
                                        		}

                                                	if (n > 0 && n <= 10)
                                                    		printf("result = %d\n",sum);
                                                            	else 
                                                                		printf("Error!\n");
                                                                        	return 0;
                                                                            }
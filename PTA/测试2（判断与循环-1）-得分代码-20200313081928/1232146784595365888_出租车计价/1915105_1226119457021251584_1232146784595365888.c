#include<stdio.h>

int main()
{
	float miles;
    	int time;
        	float sum = 0;
            	scanf("%f %d", &miles, &time);
                	
                    	if ( miles <= 3 )
                        	{
                            		sum = sum+10+(time/5)*2;
                                    	} else if ( miles>3 && miles <=10 )
                                        	{
                                            		sum = sum+10+(miles-3)*2+(time/5)*2;
                                                    	} else if ( miles > 10 )
                                                        	{
                                                            		sum = sum+10+14+(miles-10)*3+(time/5)*2;
                                                                    	}
                                                                        	
                                                                            	printf("%.0f",sum);
                                                                                	
                                                                                    	return 0; 
                                                                                        }
                                                                                        
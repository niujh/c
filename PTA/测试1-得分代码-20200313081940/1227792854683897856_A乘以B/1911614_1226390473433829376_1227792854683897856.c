#include <stdio.h> 
int main()
{
	int a = -200, b = -200;
    	while (a > 100 || b > 100 || a < -100 || b < -100)
        	{
            		scanf("%d %d", &a, &b);
                    	}
                        	printf("%d\n", a*b);
                            	return 0;
                                }
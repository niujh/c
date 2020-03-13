#include <stdio.h>
double fact(int n);
int main()
{
	int m,n;
    	if(scanf("%d %d",&m,&n)){};
        	double result;
            	result=fact(n)/(fact(m)*fact(n-m));//调用函数求组合数
                	printf("result = %.0lf",result);
                    	return 0;
                        }
                        double fact(int n)//求阶乘的函数
                        {
                        	double sul=1;
                            	for(int i=2;i<=n;i++)
                                	{
                                    		sul*=i;
                                            	} 
                                                	return sul;
                                                    }
                                                    
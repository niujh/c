#include <stdio.h>
int main()
{
	int a=0,b=0,c=0,x;
    	scanf("%d%d%d",&a,&b,&c);
        	printf("%d %d %dn",a,b,c);
            	for (x=10;x<=100;x++)
                		if (x%3==a&&x%5==b&&x%7==c)
                        			{
                                    				printf("%d",x);
                                                    				break;
                                                                    			}
                                                                                		else
                                                                                        				if(x==100) 
                                                                                                        				printf("no answern");
                                                                                                                        	return 0;
                                                                                                                            }
                                                                                                                             
                                                                                                                                                             
                                                                                                                                                                                     
                                                                                                                                                                                                                     
                                                                                                                                                                                                                     输入：216输出：41输入：213输出：NOAnswer                                                                                                                                            复制代码
                                                                                                                                                                                                                     
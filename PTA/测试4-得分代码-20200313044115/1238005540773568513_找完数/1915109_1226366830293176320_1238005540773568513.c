#include<stdio.h>
int main()
{
	int a,b,i,j,s,k,m;
    	scanf("%d %d",&a,&b);//输入两个数
        	for(i=a;i<=b;i++)
            	{
                		s=0;
                        		for(j=1;j<i;j++)
                                		{
                                        			if(i%j==0)
                                                    			{
                                                                				s+=j;
                                                                                			}
                                                                                            		}
                                                                                                    		if(s==i)
                                                                                                            		{
                                                                                                                    			printf("%d = 1",i);//为了简单输出  先把“完数 = 1”打印出来 因为肯定会有1 嘿嘿
                                                                                                                                			for(k=2;k<j;k++)
                                                                                                                                            			{
                                                                                                                                                        				if(i%k==0)
                                                                                                                                                                        				{
                                                                                                                                                                                        					printf(" + %d",k);//注意加号前后面都有 空格
                                                                                                                                                                                                            				}
                                                                                                                                                                                                                            			}
                                                                                                                                                                                                                                        			printf("\n");
                                                                                                                                                                                                                                                    			m++;//判断完数个数没有时输出None
                                                                                                                                                                                                                                                                		}
                                                                                                                                                                                                                                                                        		
                                                                                                                                                                                                                                                                                	}
                                                                                                                                                                                                                                                                                    	if(m==0)
                                                                                                                                                                                                                                                                                        		{
                                                                                                                                                                                                                                                                                                			printf("None\n");
                                                                                                                                                                                                                                                                                                            		}
                                                                                                                                                                                                                                                                                                                    	return 0;
                                                                                                                                                                                                                                                                                                                        }
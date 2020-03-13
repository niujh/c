#include <stdio.h>
const int num=1000;
int main()
{
	int m,n;
    	scanf("%d %d",&m,&n);
        	int cnt;
            	int a[num];
                	int i,j;
                    	int flag=0;
                        	for(i=m;i<=n;i++)
                            	{
                                		cnt=0;
                                        		for(j=1;j<i;j++)
                                                		{
                                                        			if(i%j==0)//找出数字的因子存放在数组中
                                                                    			{
                                                                                				a[cnt]=j;
                                                                                                				cnt++;
                                                                                                                			}		
                                                                                                                            		}
                                                                                                                                    		int sum=0;
                                                                                                                                            		for(int n=0;n<cnt;n++)//除自身之外的所有因子求和
                                                                                                                                                    		{
                                                                                                                                                            			sum+=a[n];
                                                                                                                                                                        		}
                                                                                                                                                                                		if(sum==i)
                                                                                                                                                                                        		{
                                                                                                                                                                                                			flag=1;//判断点
                                                                                                                                                                                                            			printf("%d = %d",i,a[0]);
                                                                                                                                                                                                                        			for(int d=1;d<cnt;d++)
                                                                                                                                                                                                                                    			{
                                                                                                                                                                                                                                                				printf(" + %d",a[d]);
                                                                                                                                                                                                                                                                			}
                                                                                                                                                                                                                                                                            		    printf("\n");
                                                                                                                                                                                                                                                                                        		}
                                                                                                                                                                                                                                                                                                	}
                                                                                                                                                                                                                                                                                                    	if(flag==0)
                                                                                                                                                                                                                                                                                                        	{
                                                                                                                                                                                                                                                                                                            		printf("None");
                                                                                                                                                                                                                                                                                                                    	}
                                                                                                                                                                                                                                                                                                                        	return 0;
                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                            
#include<stdio.h>
int main()
{
    int n,i,j,m,sum,c=0;
        scanf("%d %d",&n,&m);
            for(i=n;i<=m;i++)
                {
                    	sum=1;
                                for(j=2;j<i;j++)
                                        {
                                                	if(i%j==0)
                                                            	{
                                                                        		sum=sum+j;
                                                                                			}
                                                                                                    }
                                                                                                            if(sum==i)
                                                                                                                    {
                                                                                                                            	c++;
                                                                                                                                        	printf("%d = 1",sum);
                                                                                                                                                    	for(j=2;j<i;j++)
                                                                                                                                                                	{
                                                                                                                                                                            		if(i%j==0)
                                                                                                                                                                                            		{
                                                                                                                                                                                                            			printf(" + %d",j);
                                                                                                                                                                                                                                		
                                                                                                                                                                                                                                        				}
                                                                                                                                                                                                                                                                	}
                                                                                                                                                                                                                                                                            	printf("\n");
                                                                                                                                                                                                                                                                                		}
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                if(c==0)
                                                                                                                                                                                                                                                                                                    	printf("None");
                                                                                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                                                                                            }
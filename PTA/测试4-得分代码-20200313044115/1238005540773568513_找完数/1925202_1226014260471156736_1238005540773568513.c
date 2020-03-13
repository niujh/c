#include<stdio.h>
int main()
{
	int a,b,c,j,s,k,x;
    	scanf("%d %d",&a,&b);
        	x=0;
                for(c=a;c<=b;c++)
                	{
                    		s=0;
                            		for(j=1;j<c;j++)
                                    		{
                                            			if(c%j==0)
                                                        			{
                                                                    				s+=j;
                                                                                    			}
                                                                                                		}
                                                                                                        		if(s==c)
                                                                                                                		{
                                                                                                                        			printf("%d = 1",c);
                                                                                                                                    			for(k=2;k<j;k++)
                                                                                                                                                			{
                                                                                                                                                            				if(c%k==0)
                                                                                                                                                                            				{
                                                                                                                                                                                            					printf(" + %d",k);
                                                                                                                                                                                                                				}
                                                                                                                                                                                                                                			}
                                                                                                                                                                                                                                            			printf("\n");
                                                                                                                                                                                                                                                        			x++;
                                                                                                                                                                                                                                                                    		}
                                                                                                                                                                                                                                                                            		
                                                                                                                                                                                                                                                                                    	}
                                                                                                                                                                                                                                                                                        	if(x==0)
                                                                                                                                                                                                                                                                                            		{
                                                                                                                                                                                                                                                                                                    			printf("None\n");
                                                                                                                                                                                                                                                                                                                		}
                                                                                                                                                                                                                                                                                                                        	return 0;
                                                                                                                                                                                                                                                                                                                            }
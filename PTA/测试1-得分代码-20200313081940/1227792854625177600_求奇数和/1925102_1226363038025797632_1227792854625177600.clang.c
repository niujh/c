#include<stdio.h>
int main()
{
	int num, sum=0;
    	for(int i; ;i++){
        		scanf("%d", &num);
                		if(num%2!=0)
                        			sum+=num;
                                    		if((num==0||num<0)&&num%2!=0){
                                            			sum=sum-num;
                                                        			break;
                                                                    		}
                                                                            		if((num==0||num<0)&&num%2==0)
                                                                                    			break;
                                                                                                	}
                                                                                                    	printf("%d", sum);
                                                                                                        	return 0;
                                                                                                             }
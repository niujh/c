#include <stdio.h>

int f(int n)/*用于判断n是否为完数*/
{
	int is=-1;
    	int sum = 0;	    
        	int k;
                for (k = 1; k <= n/2; k++) {
                      	if (n % k == 0) {
                                  	sum += k;
                                            	}
                                                  	}      
                                                      	if(sum==n){
                                                          		is=1;
                                                                  	}
                                                                      	return is;	
                                                                          }
                                                                          int main()
                                                                          {
                                                                          	int m, n;
                                                                                	scanf("%d %d",&m,&n);
                                                                                      	int is=-1;
                                                                                          	int i;
                                                                                              	int cnt=0;/*用于计数，如果等于0，则无完数*/
                                                                                                    	for(i=m;i<=n;i++){
                                                                                                          		is=f(i);
                                                                                                                    		if(is==1){
                                                                                                                              			printf("%d = 1",i);/*完数的首个因子必为1*/
                                                                                                                                          			int k=2;
                                                                                                                                                      			for(k;k<=i/2;k++){
                                                                                                                                                                  				if(i%k==0){
                                                                                                                                                                                  					printf(" + %d",k);/*输出随后的因子*/
                                                                                                                                                                                                      				}
                                                                                                                                                                                                                      			}
                                                                                                                                                                                                                                  			printf("\n");
                                                                                                                                                                                                                                              			cnt++;
                                                                                                                                                                                                                                                          		}
                                                                                                                                                                                                                                                                  	}
                                                                                                                                                                                                                                                                      	if(cnt==0){
                                                                                                                                                                                                                                                                          		printf("None");
                                                                                                                                                                                                                                                                                  	}
                                                                                                                                                                                                                                                                                      	return 0;
                                                                                                                                                                                                                                                                                          }

    
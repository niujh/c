#include <stdio.h>

long int Qpower (int num,int n)

{

	long int res=1;

    	while (n>0){

        		if (n & 1 )

                			res*=num;

                            		num*=num;

                                    		n >>=1;

                                            }

                                            	return res;

                                                }

                                                int main()

                                                {

                                                	//long int ret = Qpower(20,10);

                                                    	printf ("%ld\n",Qpower(20,10));

                                                        	return 0;

                                                            }
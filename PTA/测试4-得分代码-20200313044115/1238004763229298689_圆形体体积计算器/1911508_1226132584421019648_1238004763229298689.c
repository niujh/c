#include "stdio.h"
#include "math.h"
#define PI 3.14159265358979
void main()
{
	double x=4.0,y=3.0,e=1.0,r,h;
    	int n,i=0;
        		while(1)
                		{
                        		printf("1-Ball\n");
                                		printf("2-Cylinder\n");
                                        		printf("3-Cone\n");
                                                		printf("other-Exit\n");
                                                        		printf("Please enter your command:\n");
                                                                			scanf("%d",&n);
                                                                            			if(n==1)
                                                                                        		{
                                                                                                		 printf("Please enter the radius:\n");
                                                                                                         		 scanf("%lf",&r);
                                                                                                                  		 printf("%.2lf\n",(x/y*1.0)*PI*pow(r,3)*1.0);	
                                                                                                                           		}
                                                                                                                                   	    else if(n==2)
                                                                                                                                           		{
                                                                                                                                                   		 printf("Please enter the radius and the height:\n");
                                                                                                                                                            		 scanf("%lf %lf",&r,&h);
                                                                                                                                                                     		 printf("%.2lf\n",h*PI*pow(r,2)*1.0);	
                                                                                                                                                                              		}
                                                                                                                                                                                      		else if(n==3)
                                                                                                                                                                                              		{
                                                                                                                                                                                                      		 printf("Please enter the radius and the height:\n");
                                                                                                                                                                                                               		 scanf("%lf %lf",&r,&h);
                                                                                                                                                                                                                        		 printf("%.2lf\n",1/y*PI*r*r*h*1.0);	
                                                                                                                                                                                                                                 		}
                                                                                                                                                                                                                                         		else break;
                                                                                                                                                                                                                                                 		}
                                                                                                                                                                                                                                                         }

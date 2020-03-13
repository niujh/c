#include<stdio.h>

int main()
{
    float x,a=10;
        int t,b;
            
                scanf("%f %d",&x,&t);
                    if(x<=3){
                            a=10;
                                    }
                                        else if(3<x && x<=10){
                                                a=a+(x-3)*2;
                                                        }
                                                            else{
                                                                    a=24+(x-10)*3;
                                                                            }
                                                                                b=(t-t%5)/5;
                                                                                    printf("%.0f", a+2*b);
                                                                                        
                                                                                            return 0;
                                                                                            }
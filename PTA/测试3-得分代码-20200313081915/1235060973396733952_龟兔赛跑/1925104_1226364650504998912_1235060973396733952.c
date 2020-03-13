#include<stdio.h>

int main()
{
    int x,a,b;
        
            scanf("%d",&x);
                a=x%90;
                    b=x/90;
                        if(a<10)
                                printf("^_^ %d",9*a+b*270);
                                    else if(a>=10 && a<30)
                                            printf("^_^ %d",90+b*270);
                                                else if(a>30 && a<45)
                                                        printf("@_@ %d",3*a+b*270);
                                                            else if(a>45 && a<60)
                                                                    printf("^_^ %d",90+9*(a-40)+b*270);
                                                                        else if(a>60 && a<90)
                                                                                printf("@_@ %d",3*a+b*270);
                                                                                    else
                                                                                            printf("-_- %d",3*a+b*270);
                                                                                                 
                                                                                                     
                                                                                                        
                                                                                                            
                                                                                                                
                                                                                                                    

                                                                                                                        
                                                                                                                          
                                                                                                                              return 0;
                                                                                                                              }
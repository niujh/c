#include<stdio.h>

int fac(int i);
int main()
{

    double e=0,item;
        int n,i;

            scanf("%d",&n);

                for(i=0;i<=n;i++){

                        item=1.0/fac(i);
                                e+=item;

                                    }

                                        printf("%.8f",e);

                                            return 0;

                                             } 

                                              int fac(int i){

                                                  int result;

                                                      if(i==0||i==1) result=1;
                                                          else result=fac(i-1)*i;

                                                              return result;

                                                               }
#include<stdio.h>
int main()
{
    int x=0;
        int y=180;
            int i,t;
                int k=1;
                    int n=1;
                        scanf("%d",&t);
                            for(i=1;i<t;i+=10)
                                {
                                     if(x<y)y=y-180;
                                          else y=y+180;
                                              n=n+1;
                                                  }
                                                      k=n-t;
                                                          if(x>y)printf("@_@ %d",3*t);
                                                              else if(x=y)printf("-_- %d",3*t);
                                                                  else printf("^_^ %d",n*90-9*k);
                                                                      return 0;
                                                                          
                                                                          }
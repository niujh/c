#include<stdio.h>
int main(void)
{
  int x1=0,x2=0,x3=0,t=10,d,T;
    scanf("%d",&T);
      for(d=0;d<T;d++)
        {
            if(x3==0)
              {
                  x2=x2+9;
                      t--;
                        }
                          if(x3>0)
                            x3--;
                                if(t==0)
                                  {
                                      t=10;
                                          if(x1<x2)
                                              x3=30;
                                                }
                                                  x1=x1+3;
                                                   
                                                     
                                                     }
                                                     if(x2>x1)
                                                     {
                                                       printf("^_^ %d\n",x2);
                                                       }
                                                       else if(x1>x2)
                                                       {
                                                         printf("@_@ %d\n",x1);
                                                         }
                                                         else if(x1==x2)
                                                         {
                                                           printf("-_- %d\n",x2);
                                                           }
                                                             return 0;
                                                             }
                                                             
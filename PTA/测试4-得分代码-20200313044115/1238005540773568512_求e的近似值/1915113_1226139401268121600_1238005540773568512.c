#include <stdio.h>
#include<stdlib.h>
int main()
{
  int i,N,fat;               
    double sum,dor;
      fat=1;      
        sum=1;                                      //由于0！=1，但是令i=1的话，fat 的值就没法算了，所以赋sum初值为1
          scanf("%d",&N);
            for(i=1;i<=N;i++){
                        fat=fat*i;          
                                 //printf("%d\n",fat);             //调试时用来判断算出的阶乘n！是否正确
                                          dor=1.0/fat;
                                                  sum+=dor;
                                                    }
                                                     printf("%.8f",sum);
                                                     return 0;
                                                     }

                                                     
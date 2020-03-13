#include<stdio.h>

int main()
{
    float y,k;
        int a,b;
            char op1='m',op2;
                scanf("%d %d %c",&a,&b,&op2);
                    if(b==90){
                            k=6.95;
                                    }
                                        else if(b==93){
                                                k=7.44;
                                                        }
                                                            else{
                                                                    k=7.93;
                                                                            }
                                                                                if(op1==op2){
                                                                                     y=a*k*(1-0.05);
                                                                                             }
                                                                                                 else{
                                                                                                         y=a*k*(1-0.03);
                                                                                                                 }
                                                                                                                     printf("%.2f",y);
                                                                                                                         return 0;
                                                                                                                         }
#include<stdio.h>
int fact(int n);
int main()
{
    double sum=0.0;
        int i=0;
            int n=0;
                scanf("%d",&n);
                    for(i=0;i<=n;i++)
                        {
                                sum+=1.0/fact(i);
                                    }
                                        printf("%.8f",sum);
                                            return 0;
                                            }
                                            int fact(int n)
                                            {
                                                
                                                    int i=1,a=1;
                                                        do
                                                            {
                                                                    a*=i;
                                                                            i++;
                                                                                    
                                                                                        }while(i<=n);
                                                                                            return a;
                                                                                            }
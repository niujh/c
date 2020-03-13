#include "stdio.h"
int main()
{
    int x=0,y=0,t,time=0,i;
        scanf("%d",&t);
            for(i=1;i<=t;i++)
                {
                        if(time>0)
                                {
                                            x+=3;
                                                        time--;
                                                                    }
                                                                            else if(time<=0)
                                                                                    {
                                                                                                x+=3;
                                                                                                            y+=9;
                                                                                                                        if(i%10==0&&y>x)
                                                                                                                                    {
                                                                                                                                                    
                                                                                                                                                                    time=30;
                                                                                                                                                                                    }
                                                                                                                                                                                                
                                                                                                                                                                                                            }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                            if(x>y)
                                                                                                                                                                                                                                    printf("@_@ %d",x);
                                                                                                                                                                                                                                            else if(x<y) 
                                                                                                                                                                                                                                                    printf("^_^ %d",y);
                                                                                                                                                                                                                                                            else if(x==y)
                                                                                                                                                                                                                                                                    printf("-_- %d",x);        
                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                            
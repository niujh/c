#include<stdio.h>

int main()
{
    int a,i,b,count1=0,count2=0;
        scanf("%d",&a);
            for(i=1;i<=a;i++){
                    scanf("%d",&b);
                            if(b%2==0){
                                        count1++;
                                                }
                                                        else{
                                                                    count2++;
                                                                                }
                                                                                    }
                                                                                        printf("%d %d",count2,count1);
                                                                                            return 0;
                                                                                            }
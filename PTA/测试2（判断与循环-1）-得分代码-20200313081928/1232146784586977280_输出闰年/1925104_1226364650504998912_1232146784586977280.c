#include<stdio.h>

int main(){
    int x,i,count=0;
        scanf("%d",&x);
            if(x<=2000||x>2100){
                    printf("Invalid year!\n");
                            count=1;
                            }
                                    else{
                                            for(i=2001;i<=x;i++){
                                                        if(i%4==0 && i%100!=0){
                                                                        printf("%d\n",i);
                                                                                        count++;
                                                                                                    } 
                                                                                                            }
                                                                                                                }
                                                                                                                    if(count==0){
                                                                                                                            printf("None\n");
                                                                                                                                }
                                                                                                                                    return 0;

                                                                                                                                     
                                                                                                                                     }
                                                                                                                                         

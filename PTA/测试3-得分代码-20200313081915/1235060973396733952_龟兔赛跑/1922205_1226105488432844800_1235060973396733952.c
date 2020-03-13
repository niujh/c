#include<stdio.h>
int main(){
    int T;
        scanf("%d",&T);
            int ogui,otu, gui=0,tu=0, i,j,lan=0;//o指out，最终输出，gui 龟， tu兔，lan，懒
                ogui=3*T;
                    for(i=1;i<=T;i++){
                            gui+=3;//中间标记龟的行程
                                    if(lan!=1){//不偷懒状态下，兔子行程
                                                tu+=9;
                                                        }
                                                                if(i%10==0){//每到这时，兔子可能变成懒状态，也可能不变懒。
                                                                            if(lan==0 && tu>gui){//开始偷懒
                                                                                            lan=1;
                                                                                                            j=i;//记录偷懒的时刻
                                                                                                                        }
                                                                                                                                    if(i==j+30)//如果这次是兔子偷懒并且休息了30分钟之后，那就不能再偷懒了。
                                                                                                                                                lan =0;         
                                                                                                                                                        }   
                                                                                                                                                            }
                                                                                                                                                                otu =tu;
                                                                                                                                                                    if(otu>ogui)
                                                                                                                                                                        printf("^_^ %d",otu);
                                                                                                                                                                            else if(otu==ogui)
                                                                                                                                                                                printf("-_- %d",ogui);
                                                                                                                                                                                    else printf("@_@ %d",ogui);
                                                                                                                                                                                        return 0;
                                                                                                                                                                                        }

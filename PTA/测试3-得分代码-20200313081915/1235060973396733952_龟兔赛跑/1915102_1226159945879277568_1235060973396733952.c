#include<stdio.h>
int main(void)
{
    int T,time=0,gui,tu=0;
    scanf("%d",&T);
    if(T<=10){
        printf("^_^ %d",6*T);
    }
    else{
        gui=3*T;
        while(time<=T){
            if(tu<=3*time){
                if(time+10<=T){
                    tu=tu+90;
                    time=time+10;
                }
                else{
                    tu=tu+9*(T-time);
                }
            }
            else{
                time=time+30;
            }
        }
        if(gui>tu)printf("@_@ %d",gui-tu);
        else if(tu>gui)printf("^_^ %d",tu-gui);
        else printf("-_-");
    }
    return 0;
}
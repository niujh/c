#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int a1,a2, gui=0,tu=0, i,j,lan=0;
    a1=3*T;
    for(i=1;i<=T;i++){
        gui+=3;
        if(lan!=1){
            tu+=9;
        }
        if(i%10==0){
            if(lan==0 && tu>gui){
                lan=1;
                j=i;
            }
            if(i==j+30)
            lan =0;
        }
    }
    a2 =tu;
    if(a2>a1)
    printf("^_^ %d",a2);
    else if(a2==a1)
    printf("-_- %d",a1);
    else printf("@_@ %d",a1);
    return 0;
}

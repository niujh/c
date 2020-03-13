#include<stdio.h>
int main(){
    int T;
    scanf("%d",&T);
    int ogui,otu, gui=0,tu=0, i,j,lan=0;
    ogui=3*T;
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
    otu =tu;
    if(otu>ogui)
    printf("^_^ %d",otu);
    else if(otu==ogui)
    printf("-_- %d",ogui);
    else printf("@_@ %d",ogui);
    return 0;
}
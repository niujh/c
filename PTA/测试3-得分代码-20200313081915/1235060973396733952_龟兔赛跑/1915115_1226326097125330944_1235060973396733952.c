#include <stdio.h>

int main(int argc, char **argv){
     int T;
    scanf("%d",&T);
    int og,ot, g=0,t=0, i,j,lan=0;
    og=3*T;
    for(i=1;i<=T;i++){
        g+=3;
        if(lan!=1){
            t+=9;
        }
        if(i%10==0){
            if(lan==0 && t>g){
                lan=1;
                j=i;
            }
            if(i==j+30)
            lan =0;
        }   
    }
    ot =t;
    if(ot>og)
    printf("^_^ %d",ot);
    else if(ot==og)
    printf("-_- %d",og);
    else printf("@_@ %d",og);
    return 0;
} 
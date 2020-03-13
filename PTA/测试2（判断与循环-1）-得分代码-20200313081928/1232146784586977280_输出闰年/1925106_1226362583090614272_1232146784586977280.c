#include<stdio.h>
int main()
{
    int i,x;
    scanf("%d",&x);
    if(x<=2000){
        printf("Invalid year!");
    }
    else if(2000<x<2004){
        printf("None");
    }
    else{
        for(i=2000;i<=x;i++){
            if(i/4==0){
                printf("%d\n",i);
            }
        }

    }
    return 0;
}
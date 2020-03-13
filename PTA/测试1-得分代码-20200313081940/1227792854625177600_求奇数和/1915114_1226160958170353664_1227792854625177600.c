#include<stdio.h>
int main(void)
{
    int total=0,i,J;

    for(i=1;i++){
        scanf("%d",&J);
        if(J>=0){
        total=total+J;
        printf("%d",total);
        }
    }
    return 0;
}
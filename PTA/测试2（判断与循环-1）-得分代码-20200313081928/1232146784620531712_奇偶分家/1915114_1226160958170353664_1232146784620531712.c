#include<stdio.h>
int main(void)
{
    int n,countj=0,counto=0,i,N;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&N);
        if(N%2==0)
            counto++;
        else
            countj++;
    }
    printf("%d %d",countj,counto);
    return 0;
}
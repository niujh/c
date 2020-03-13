#include<stdio.h>

int main()
{
    int N;
    char c;
    int i,j;
    scanf("%d %c",&N,&c);
    if(N%2==0){
        for(i=0;i<N/2;i++){
            for(j=0;j<N;j++){
                printf("%c",c);
            }
            printf("\n");

        }
    }else{
        for(i=0;i<N/2+1;i++){
            for(j=0;j<N;j++){
                printf("%c",c);

            }
            printf("\n");

        }
    }
    return 0;
}
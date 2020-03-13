#include<stdio.h>

int main()

{
    int n,N,a,b = 0,c = 0;
    scanf("%d",&n);
    for(a == 0;a < n;a++){
        scanf("%d",&N);
        if(N % 2 ==0 ){
            b++;
        }
        else{
            c++;
        }
    }
    printf("%d %d",c,b);
    return 0;
}

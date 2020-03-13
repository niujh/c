#include <stdio.h>
int main(){
    int sum=0, n;
    while(1){
        scanf("%d", &n);
        if(n<=0){
            break;
        }
        if(n%2==1){
            sum += n;
        }
    }
    printf("%d\n", sum);

    return 0;
}
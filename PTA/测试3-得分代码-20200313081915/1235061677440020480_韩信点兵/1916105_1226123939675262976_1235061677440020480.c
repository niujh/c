#include <stdio.h>
#define N 10000
int main(){
    int i=1;
    while(i<N){
        if(i%5==1 && i%6==5 && i%7==4 && i%11==10){
            printf("%d\n", i);
            break;
        }
        i++;
    }

    return 0;
}


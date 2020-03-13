#include<stdio.h>
#include<math.h>
int main(){
    int N;
    char c;
    scanf("%d %c", &N, &c);
    int x = (int)sqrt(2.0 * (N + 1) ) - 1;
    if(x % 2 == 0) x--;
    int used = (1 + x) * (1 + x) / 2 - 1;
    //倒三角
    for(int i = x; i >= 1; i -= 2){//i为当前行的*数
        for(int j = (x - i) / 2; j > 0; j--){//space
            printf(" ");
        }
        for(int j = i; j > 0 ;j--){
            printf("%c", c);
        }
        printf("\n");
    }
    //正三角
    for(int i = 3; i <= x; i += 2){//i为当前行的*数
        for(int j = (x - i) / 2; j > 0;j--){//space
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("%c", c);
        }
        printf("\n");
    }
    printf("%d\n", N - used);
    return 0;
}

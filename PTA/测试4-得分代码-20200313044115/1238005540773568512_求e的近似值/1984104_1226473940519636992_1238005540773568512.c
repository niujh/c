#include <stdio.h>
int fact( int n){
    int i ,sum = 1;
    for(i = 1;i<=n;i++){
        sum *= i;
    }
    return sum;
}
int main(int argc, char **argv) {
    int n,i;
    double sum = 1.0;
    scanf("%d",&n);
    if(n == 0){
        return sum ;
    }
    for(i = 1;i<=n;i++){
        sum += 1.0/(fact(i));
    }
    printf("%.8lf",sum);
return 0;
}

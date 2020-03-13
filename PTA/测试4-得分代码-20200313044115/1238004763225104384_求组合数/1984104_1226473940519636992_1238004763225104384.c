#include <stdio.h>
int fact( int m ){
    int i ;
    double sum = 1.0;
    if(m == 0){
        return sum;
    }
    for(int i = m;i>1;i--){
        sum *= i ;
    }
    return sum ;
}
int main(int argc, char **argv) {
    int m , n ;
    double result;
    scanf("%d %d",&m,&n);
    fact(n);
    fact(m);
    fact(n-m);
    result = fact(n)/(fact(m)*fact(n-m));
    printf("result = %.0f\n",result);
    return 0;
}


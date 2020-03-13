
#include <stdio.h>
 
int main () {
    double eps,sum=2,i,temp=1;
    scanf("%lf",&eps);
    for ( i=1; temp>eps; i++){
        temp *=  i /(2*i+1);
        sum += temp*2 ;
    }
    printf("PI = %.5f",sum);
    return 0 ; 
}

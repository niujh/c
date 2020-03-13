#include <stdio.h>
 
int main () {
    double factorial( int number);
    int n,m;
    double  result; 
    scanf ("%d%d",&m,&n);
//    printf ("n!=%d\tm!=%d\t(n-m)!=%d\n",factorial(n),factorial(m),factorial(n-m));
    result =  factorial(n)/factorial(m)/factorial(n-m);
    if (m)                        //其实可以不要的，定义上来说0是整数，但既不是负数也不是整数
        printf("result = %.0f",result);
    else
        printf("result = 0");
    return 0 ;
}
    double factorial( int number){     //阶乘函数
        double result=1.0;
        while(number--){
            result *= number + 1 ;
        }
        return result ;
    }

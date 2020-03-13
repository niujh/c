#include <stdio.h>
int main()
{
    double eps;
    scanf("%le",&eps);
    double sum=1;
    double m=1;
    int i;
    for(i=1;m>eps;i++){
        m=m*i/(2*i+1);
        sum+=m;
    }
    printf("PI = %.5f\n",2*sum);
    return 0;
}
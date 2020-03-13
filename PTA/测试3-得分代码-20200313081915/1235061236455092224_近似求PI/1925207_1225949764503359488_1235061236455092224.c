#include <stdio.h>

int main()
{
    double a, sum=1, i, temp=1;
    scanf("%le", &a);
    for(i=1; temp>a; i++){
        temp = temp*i/(2*i+1);
        sum += temp;
    }
    printf("PI = %.5f\n", 2*sum);

    return 0;
}

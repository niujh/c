#include <stdio.h>

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *=  i;
    }
    return fact;
}
int main()
{
    int n;
    double sum = 1.0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / fact(i);
        if (i == 11) {  
            break;
        }
    }
    printf("%.8f\n", sum);
    return 0;
}

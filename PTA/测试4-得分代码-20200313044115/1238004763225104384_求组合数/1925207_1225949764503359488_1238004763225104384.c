#include<stdio.h>
double fact(int n);

int main()
{
    int i, n, m;
    double result;
    scanf("%d%d", &m, &n);
    result = 1;
    for(i = 0; i <= n; i++) {
        result = fact(n)/(fact(m)*fact(n-m));
    }
    printf("result = %.0f", result);
    return 0;
}
double fact(int n) {
    int i;
    double t;
    t=1;
    for(i = 1; i <= n; i++) {
        t = t*i;
    }
    return t;
}

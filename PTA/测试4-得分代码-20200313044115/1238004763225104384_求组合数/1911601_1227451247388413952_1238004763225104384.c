#include <stdio.h>

double fact(int n) {
    int i;
    double result = 1.0;

    if (n == 0) {
        return 1.0;
    }
    for (i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main(void) {
    int m, n;
    double result;

    scanf("%d %d", &m, &n);
    result = fact(n) / (fact(m)*fact(n - m));
    printf("result = %.0f\n", result);

    return 0;
}
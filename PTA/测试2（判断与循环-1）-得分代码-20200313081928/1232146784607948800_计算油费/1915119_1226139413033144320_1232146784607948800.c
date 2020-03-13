#include<stdio.h>
int main()
{
    double sum;
    int a, b;
    char c;
    scanf("%d %d %c", &a, &b, &c);
    if (b == 90)
        sum = a * 6.95;
    else if (b == 93)
        sum = a * 7.44;
    else
        sum = a * 7.93;
    if (c == 'm')
        sum = sum * 0.95;
    else
        sum = sum * 0.97;
    printf("%.2f", sum);
    return 0;
}
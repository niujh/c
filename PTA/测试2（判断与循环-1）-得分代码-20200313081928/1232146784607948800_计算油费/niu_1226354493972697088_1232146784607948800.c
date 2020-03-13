#include<stdio.h>

int main()
{
    int a, b;
    char c;
    float price;
    scanf("%d %d %c", &a, &b, &c);
    switch(b)
    {
        case 90:
            price = 6.95;
            break;
        case 93:
            price = 7.44;
            break;
        case 97:
            price = 7.93;
            break;
    }
    if(c == 'm')
        printf("%.2f", price * a * (1 - 0.05));
    else
        printf("%.2f", price * a * (1 - 0.03));
    return 0;
}
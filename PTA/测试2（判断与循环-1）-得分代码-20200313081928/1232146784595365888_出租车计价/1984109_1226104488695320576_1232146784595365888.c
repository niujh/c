#include <stdio.h>

int main(void) 
{
    double km;
    int time;
    scanf("%lf %d", &km, &time);
    double km_fee, sum;
    int time_fee;
    if (km <= 3.0) {
        km_fee = 10;
    }
    else if (km <= 10.0) {
        km_fee = 10 + 2 * (km - 3);
    }
    else {
        km_fee = 10 + 14 + 3 * (km - 10);
    }
    time_fee = 2 * (time / 5);
    sum = km_fee + time_fee;
    printf("%.0f\n", sum);

    return 0;
}

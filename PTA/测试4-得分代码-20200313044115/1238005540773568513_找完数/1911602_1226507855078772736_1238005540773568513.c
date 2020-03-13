
#include <stdio.h>
#define MAXN 1000
 
int main(void) {
    int m, n, i, j, factor[MAXN];
    int none = 1;  //默认在范围内没有完数
 
    scanf("%d %d", &m, &n);
    for (i = m; i <= n; i++) {
        int max, count = 0, sum = 0;
 
        max = i / 2;  //某数最大因子不超过其一半
        for (j = 1; j <= max; j++) {
            if (i%j == 0) {
                count++;  //统计某数因子个数
                factor[count] = j;  //逐个记录因子
            }
        }
        for (j = 1; j <= count; j++) {  //对因子求和
            sum += factor[j];
        }
        if (sum == i) {
            none = 0;  //找到完数
            printf("%d =", i);
            for (j = 1; j <= count; j++) {
                if (j == 1) {
                    printf(" %d", factor[j]);
                }
                else {
                    printf(" + %d", factor[j]);
                }
            }
            printf("\n");
        }
    }
    if (none == 1) {
        printf("None\n");
    }
 
    return 0;

}
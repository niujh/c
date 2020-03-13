#include <stdio.h>
#include<math.h>

int main(int argc, char **argv) {
    int n, sum = 0;
    scanf("%d",&n);
    for(int i = 1;i<=n;i++){
        sum += (int)pow(2,i);
    }
    printf("result = %d\n",sum);
    return 0;
}

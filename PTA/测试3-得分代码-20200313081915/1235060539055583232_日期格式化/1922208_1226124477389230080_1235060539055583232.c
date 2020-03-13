#include <stdio.h>


int main(){
    int yy, mm, dd;
    scanf("%d-%d-%d", &mm, &dd, &yy);
    printf("%04d-%02d-%02d", yy, mm, dd);
    return 0;
}
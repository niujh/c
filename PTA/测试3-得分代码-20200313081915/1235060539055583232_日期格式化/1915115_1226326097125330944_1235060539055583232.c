#include <stdio.h>

int main(int argc, char **argv){
    int year,month,day;
    scanf("%d-%d-%d",&month,&day,&year);
    printf("%d-%02d-%02d",year,month,day);
    return 0;
}
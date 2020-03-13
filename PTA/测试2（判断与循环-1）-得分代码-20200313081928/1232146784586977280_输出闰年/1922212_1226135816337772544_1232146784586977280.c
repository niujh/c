#include<stdio.h>

int main(void){
    int year, i, fiag;

    fiag = 0;
    scanf("%d", &year);
    if (year >= 2001 && year <= 2100) {
        for (i =2001; i <= year; i++)
               if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {
                   printf("%d\n", i);
                   fiag = 1;
               }
        if (fiag == 0) printf("None\n");
    }
    else printf("Invalid year!\n");
    return 0;
}   


    

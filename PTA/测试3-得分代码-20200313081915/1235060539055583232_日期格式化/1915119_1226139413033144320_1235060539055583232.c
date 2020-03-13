#include<stdio.h>
int main()
{
    int year,day,mouth;
    scanf("%d-%d-%d",&mouth,&day,&year);
    printf("%d-%02d-%02d",year,mouth,day);
    return 0;
}
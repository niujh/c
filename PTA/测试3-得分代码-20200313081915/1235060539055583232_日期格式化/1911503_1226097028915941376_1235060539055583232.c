#include <stdio.h>
int main()
{
    int day,month,year;
    scanf("%d-%d-%d",&month,&day,&year);
    printf("%d-%02d-%02d",year,month,day);

    return 0;
}
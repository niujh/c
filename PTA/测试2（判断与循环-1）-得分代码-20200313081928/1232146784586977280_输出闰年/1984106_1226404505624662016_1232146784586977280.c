#include<stdio.h>
int main()
{
    int i,year;
    scanf("%d",&year);
    if(year<=2000||year>2100)
    {
        printf("Invalid year!");
        return 0;
    }
    else if(year<2004)
    {
        printf("None");
    }
    for(i=2001;i<=year;i++)
    {
        if(i%4==0&&i%100!=0&&i%400!=0)
        printf("%d\n",i);
    }
    return 0;
}
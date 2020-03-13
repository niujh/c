#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x>=90)
    {
        printf("A");
    }
    if(x<90&&x>=80)
    {
        printf("B");
    }
    if(x<80&&x>=70)
    {
        printf("C");
    }
    if(x<70&&x>=60)
    {
        printf("D");
    }
    if(x<60)
    {
        printf("E");
    }
    return 0;
}
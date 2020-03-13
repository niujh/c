#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    int b=a/10;
    switch(b)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:printf("E");break;
        case 6:printf("D");break;
        case 7:pritnf("C");break;
        case 8:printf("B");break;
        defaault:printf("A");break;
    }
    return 0;
}
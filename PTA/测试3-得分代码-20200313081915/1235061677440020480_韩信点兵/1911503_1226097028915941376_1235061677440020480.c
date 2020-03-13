#include <stdio.h>
int main()
{
    int a=1,b=0;
    while(b!=1)
    {
        a++;
        b=(a%5==1&&a%6==5&&a%7==4&&a%11==10);
    }
    printf("%d",a);

    return 0;
}

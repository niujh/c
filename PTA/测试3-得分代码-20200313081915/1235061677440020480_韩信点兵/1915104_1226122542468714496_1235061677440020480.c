#include <stdio.h>
int main()
{
    int a;
    for (a=11;;a++)
    {
        if (a%5==1&&a%6==5&&a%7==4&&a%11==10)
        {
            printf("%d",a);
            break;
        }
    }
    return 0;
}

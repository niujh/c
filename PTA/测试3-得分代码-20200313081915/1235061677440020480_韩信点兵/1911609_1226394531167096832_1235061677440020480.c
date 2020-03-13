#include<stdio.h>
int main()
{
    int n ;
    for(n = 1;n <= 10000;n++)
    {
        if((n%5==1)&&(n % 6 == 5)&&(n % 7 == 4)&&(n % 11 == 10))
        {
            printf("%d\n",n);
            break;
        }
    }
}

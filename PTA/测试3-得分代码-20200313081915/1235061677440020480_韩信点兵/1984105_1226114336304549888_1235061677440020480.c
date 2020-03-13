#include<stdio.h>
int main()
{
for(int num=1;;num++)
{
    if((num%5==1)&&(num%6==5)&&(num%7==4)&&(num%11==10))
    {
        printf("%d",num);
        break;
    }
}
    return 0;
}
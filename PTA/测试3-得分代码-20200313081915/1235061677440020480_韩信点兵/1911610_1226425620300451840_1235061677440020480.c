#include<stdio.h>
int main()
{
    int i=1;
    for(i=1; ;i++)
    {
        if(i%5==1&&i%6==5&&i%7==4&&i%11==10)
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
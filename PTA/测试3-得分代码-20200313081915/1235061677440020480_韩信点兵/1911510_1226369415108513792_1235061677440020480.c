#include<stdio.h>
int main(void)
{
    int i,m;
    for (m=1;;m++)
    {
        if ((m%5==1)&&(m%7==4)&&(m%6==5)&&(m%11==10))
        {
            printf("%d",m);
            return 0;
        }
    }
    
}
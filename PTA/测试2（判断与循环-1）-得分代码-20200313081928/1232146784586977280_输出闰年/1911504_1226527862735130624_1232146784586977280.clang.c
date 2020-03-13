#include<stdio.h>
int main(void)
{
    int a,b,c,i;
    scanf("%d",&a);
    if(a>2000&&a<=2100)
    {
        if(a>2000&&a<=2003)
        printf("None\n");
        else
        {
            i=2001;
            while(i<=a)
            {
                if(i%4==0&&i<2100)
                    printf("%d\n",i);
                i++;
            }
        }
    }
    else
       printf("Invalid year!\n");

}
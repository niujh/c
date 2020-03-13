#include<stdio.h>
int main()
{
    int a,i,n = 0;
    scanf("%d",&a);
    if(a > 2000 && a <=2100)
    {
        for(i = 2001;i <= a;i++)
        {
            if((i % 400 == 0) || (i % 100 != 0&&i % 4 == 0))
                {
                    printf("%d\n",i);
                    n++;
                }
        }
        if(n ==0)printf("None\n");
    }
    else printf("Invalid year!");
}

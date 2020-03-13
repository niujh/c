#include<stdio.h>
int main()
{
    int a,i;
    char c;
    scanf("%d %c",&a,&c);
    if(a%2==0)
    {
        for(i=1;i<=a*a/2;i++)
        {
            printf("%c",c);
            if(i%a==0)
            {
                printf("\n");
               
            }
        }
    }
    else
    {
        for(i=1;i<=a*(a+1)/2;i++)
        {
        printf("%c",c);
        if(i%a==0)
        {
            printf("\n");
         
        }
        }

    }
	return 0;
}

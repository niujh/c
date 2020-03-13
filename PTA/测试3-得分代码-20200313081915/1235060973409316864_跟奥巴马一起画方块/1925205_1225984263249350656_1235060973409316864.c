#include<stdio.h>
int main()
{
    int a,b;
    char x;
    scanf("%d %c",&a,&x);
    b=(int)(a*0.5+0.5);
    for(int i=1;i<=b;i++)
        {
            for(int j=1;j<=a;j++)
            {printf("%c",x);}
            printf("\n");
        }
    return 0;

}
#include<stdio.h>
int main(void)
{
    int a,i,j;
    char ch;
    scanf("%d %c",&a,&ch);
    for(i=1;i<=(a+1)/2;i++)
        {
            for(j=1;j<=a;j++)
                printf("%c",ch);
            printf("\n");
        }
}

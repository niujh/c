#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,total,n;
    char ch;
    scanf("%d %c",&total,&ch);
    n=(total+1)/2;
    n=(int)sqrt(n);
    for(i=0;i<0;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(k=0;k<2*(n-i)-1;k++)
            printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=n-i-1;j>0;j--)
            printf(" ");
        for(k=0;k<2*(i+1)-1;k++)
            printf("%c",ch);
        printf("\n");
    }
printf("%d",total-2*n*n+1);
    return 0;
}

            
    
#include<stdio.h>
int main()
{
    int N,sum,x,y,t,a,b;
    char C;
    sum=1;
    scanf("%d %c",&N,&C);
    for (x=1;sum<=N;)
    {
        x=x+2;
        sum=sum+2*x;
    }
    sum =sum-2*x;
    N=N-sum;
    x=x-2;
    t=(x+1)/2;
    for (y=1;y<=t;y++)
    {
        for (a=1;a<y;a++)
        {
            printf(" ");
        }
        for (b=1;b<=(2*(t-y)+1);b++)
        {
            printf("%c",C);
        }
        printf("\n");
    }
    for (y=1;y<t;y++)
    {
        for (a=1;a<t-y;a++)
        {
            printf(" ");
        }
        for (b=1;b<=2*y+1;b++)
        {
            printf("%c",C);
        }
        printf("\n");
    }
    printf("%d",N);
}
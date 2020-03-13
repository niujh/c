#include<stdio.h>
int Shu(int i);
int main()
{
    int i,t;
    printf("Input i:");
    scanf("%d",&i);
    t=Shu(i);
    printf("%d\n",t);

    return 0;
}
int Shu(int i)

{
    int a;
    printf("Input a:");
    scanf("%d",&a);
    switch(a/10)
    {
    case 9:
        printf("'A'");
        break;
    case 8:
        printf("'B'");
        break;
    case 7:
        printf("'C'");
        break;
    case 6:
        printf("'D'");
        break;
    default:printf("E");
    }
    return 0;
}
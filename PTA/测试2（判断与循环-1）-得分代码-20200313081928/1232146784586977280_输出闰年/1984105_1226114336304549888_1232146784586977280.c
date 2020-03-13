#include<stdio.h>
int main()
{
    int m,i,count=0;
    scanf("%d",&m);
    if(m<=2000||m>2100)
    {
        printf("Invalid year!");
        return 0;
    }
    for(i=2001;i<=m;i++)
    {
        if(i%4==0&& i%100!=0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    if(count==0)
    {
        printf("None");
    }
    return 0;
}
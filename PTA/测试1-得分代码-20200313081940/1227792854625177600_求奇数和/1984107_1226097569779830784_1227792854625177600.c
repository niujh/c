#include<stdio.h>
int main()
{
    int n=0;
    int s=0;
    while(n>=0)
    {
        scanf("%d",&n);
        if(n%2==1)
            {s=s+n;}
        else
            {s=s+0;}
    }
    printf("%d",s);
    return 0;

}

#include<stdio.h>
int main()
{
    int n,num;
    int p=0,q=0;
    while(n>0)
    {
        --n;
        scanf ("%d",&num);
        if(num%2==1)
            p++;
        else
            q++;
    }
    printf ("奇數：%d 偶數：%d",p,q);
    return 0;
}
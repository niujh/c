#include<stdio.h>
int main()
{
    int t,a,b,c=90;
    scanf("%d",&t);
    b=t%c;
    a=(t-b)/c;
    if(0<b<30||45<b<60)
    {
        if(b<=10)
        {
            printf("^_^ %d",270*a+b*9);
        }
        else if(10<b<30)
        {
            printf("^_^ %d",270*a+90);
        }
        else if(45<b<50)
        {
            printf("^_^ %d",270*a+135+(b-45)*9);
        }
        else
        {
            printf("^_^ %d",270*a+180);
        }
    }
    else if(30<b<45||60<b<90)
    {
        printf("@_@ %d",270*a+b*3);  
    }
    else
    {
        printf("-_- %d",270*a+b*3);
    }
    printf("\n");
	return 0;
}
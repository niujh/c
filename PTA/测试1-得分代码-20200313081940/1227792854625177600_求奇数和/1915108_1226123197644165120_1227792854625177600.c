# include<stdio.h>
int main()
{
int sum = 0,A;
do
{
    scanf("%d",&A);
    if(A <= 0) 
    break;
    else
    {
        if(A % 2 == 0)
        sum = sum;
        else
        {
            sum = sum + A;
        }
    }
}while(A > 0);
printf("%d",sum);

return 0;
}
#include<stdio.h>
double fact(int num)
{
	double result=num;
	for(int i=1;i<num+1;i++)
    {
		result*=i;
	}
	return result;
}
int main()
{
    double item,sum=1.0,result=0;
    int num;
    scanf("%d", &n);
    for(num=1; num<=n; num++)
    {
        item=1.0\fact(num)
        sum=sum+item
    }
    printf("%.8f", sum);
    return 0;
}


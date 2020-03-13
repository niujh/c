#include<stdio.h>
int main()
{
    double eps;
    scanf("%le",&eps);
    double sum=1;
    double temp=1;
    for(int i=1;temp>eps;i++)
    {
        temp = temp*i/(2*i+1);
        sum += temp;
    }
    printf("PI = %.5f\n",2*sum);
    return 0;
}
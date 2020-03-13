#include<stdio.h>
#include<math.h>
double sum(int i)
{
    int n;
    double sum=0;
    
    for(n=1;n<=i;n++){
        sum=sum+pow(2,n);
    }
    return sum;
}

int main()
{
    int i;
    scanf("%d",&i);
    printf("result = %.0f",sum(i));
    return 0;

}
#include<stdio.h>
int main(void)
{
    double sum=1,temp=1;
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        temp=temp/i;
        sum=sum+temp;
    }
    printf("%.8f",sum);
    return 0;
}


#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
int i, m, n;

scanf("%d %d", &m, &n);
PrintPN(m, n);

return 0;
}
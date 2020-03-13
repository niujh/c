#include <stdio.h>
double fact(int n);
int main(){
    int n,m,result;
    scanf("%d %d", &m, &n);
    result=fact(n)/(fact(m)*fact(n-m));
    printf("result = %d\n", result);
    return 0;
}

double fact(int n)
{
    int i = 1;
    double pro= 1;
    while (i <= n)
    {
        pro = pro*i;
        i++;
    }
    return pro
}
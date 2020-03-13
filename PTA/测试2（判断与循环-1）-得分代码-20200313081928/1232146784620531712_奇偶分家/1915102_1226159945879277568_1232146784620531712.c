#include<stdio.h>
int main(void)
{
    int n,i,ji=0,ou=0;
    int a[1001];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        if(a[i]%2==1)ji++;
        else ou++;
    }
    printf("%d %d",ji,ou);
    return 0;
}
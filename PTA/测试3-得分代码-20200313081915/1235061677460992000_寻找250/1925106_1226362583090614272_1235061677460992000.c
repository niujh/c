#include<stdio.h>
int main()
{
    int i;
    int arr[10005];
    for(i=1;i<=10005;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==250){
            break;
        }
    }    
    printf("%d",i);
    return 0;
}
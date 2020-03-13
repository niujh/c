# include<stdio.h>
int main()
{
    int N,i,n,a=0,b=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&n);
        if(n%2==0){
            a++;
        }
        else{
            b++;
        }
    }
    printf("%d %d",b,a);
    return 0;
}
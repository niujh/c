#include<stdio.h>
void shalou(int n, char c);
int main (void)
{
    int n;
    char c;
    scanf("%d %c", &n, &c);
    shalou(n, c);


    return 0;
}
void shalou(int n, char c)
{
    int y=0, N=-1, line=0, x=1, a, i, b, d, e, f, sum=0;
    while(1){
        N=N+2;
        line++;
        y=y+N;
        if(n-2*y+1==0)  {
            break;
        }
        if(n-2*y+1<0){
            N=N-2;
            line=line-1;
            break;
        }
    }
    for(i=1; i<=line; i++){
        for(a=0; a<N; a++){
            printf("%c",c);
        }
        N=N-2;
        printf("\n");
        if(i!=line){
            for(b=1; b<=x; b++){
                printf(" ");
            }
            x=x+1;
        }
        sum=sum+a;
    }  
    for(d=1; d<=line-1; d++){
        for(e=1; e<=x-2; e++){
            printf(" ");
        }
        x=x-1;
        for(f=0; f<N+4; f++){
            printf("%c",c);
        }
        N=N+2;
        printf("\n");
        sum=sum+f;
    }
    printf("%d", n-sum);
    return 0;
}
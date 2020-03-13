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

/* 你的代码将被嵌在这里 */
int factorsum( int number ){
    int i=1,sum=0;
    if(number==1)sum=1;
    else{
            for(i=1;i<number;i++){
            if(number%i==0)sum=sum+i;
        }
    }
    return sum;
}
void PrintPN( int m, int n ){
    int i,j,flag=0;
    for(i=m;i<=n;i++){
        if(factorsum(i)==i){
            flag=1;
            printf("%d = 1",i);
            for(j=2;j<i;j++){
                if(i%j==0)printf(" + %d",j);
            }
            printf("\n");
        }
    }
    if(flag==0)printf("None");
}        
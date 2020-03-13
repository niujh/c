#include<stdio.h>
int main()
{
    int N,n,i,j;
    char C;
    scanf("%d %c",&N,&C);
    if(N>=3 && N<=21)
    {
        if(N%2==0) 
            n=N/2;   
        else 
        n=N/2+1;
        for(j=0;j<n;j++)  
        {
            for(i=0;i<N;i++) 
                printf("%c",C);  
                printf("\n");
        }
    }
    return 0;
}     
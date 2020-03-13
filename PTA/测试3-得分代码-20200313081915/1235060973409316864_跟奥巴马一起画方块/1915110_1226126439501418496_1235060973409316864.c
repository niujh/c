#include()
int main()
{
    int N,i,j,k;
    char cha;
    scanf("%d %c",&N,&cha);
    k=N/2;
    if(N<=21 && N>=3)
    {
        for(i=1;i<=N;i++)
        {
        if(i!=N)
        {
            printf("%c ",&cha);
        }
        else
        {
            for(j=1;j<=k;j++)
            {
                printf("%c\n",&cha);
            }
        }
        }
    }

    return 0;
}
#include<stdio.h>
int main()
{
    int hang,lie,N;
    char c;
    scanf("%d %c",&N,&c);
    if(N>=3&&N<=21)
    {
        if(N%2==0)
        {
            for(hang=0;hang<N/2;hang++)
            {
                for(lie=0;lie<N;lie++)
                {
                    printf("%c",c);
                }
                printf("\n");
            }
        }
        else
        {
            for(hang=0;hang<(N/2+1);hang++)
            {
                for(lie=0;lie<N;lie++)
                {
                    printf("%c",c);
                }
                printf("\n");
            }
        }
    }
    else
    {
        printf("error!");
    }
    return 0;
}
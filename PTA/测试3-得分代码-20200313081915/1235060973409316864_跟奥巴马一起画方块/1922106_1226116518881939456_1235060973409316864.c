#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i,j;
        char c;
            scanf("%d %c",&N,&c);
                if(N%2==1)
                    {
                            for(i=1; i<=N/2+1; i++)
                                    {
                                                for(j=1; j<=N; j++)
                                                            {
                                                                            printf("%c",c);
                                                                                        }
                                                                                                    printf("\n");
                                                                                                            }
                                                                                                                }
                                                                                                                    else
                                                                                                                        {
                                                                                                                                for(i=1; i<=N/2; i++)
                                                                                                                                        {
                                                                                                                                                    for(j=1; j<=N; j++)
                                                                                                                                                                {
                                                                                                                                                                                printf("%c",c);
                                                                                                                                                                                            }
                                                                                                                                                                                                        printf("\n");
                                                                                                                                                                                                                }
                                                                                                                                                                                                                    }
                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                        
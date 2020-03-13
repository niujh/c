#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,X,Y,m,i,j,k,p,q;
        char a;
            scanf("%d %c",&n,&a);
                Y=n;
                    for(X=1;(X+1)*(X+1)<=2*Y+2;X=X+2)
                        {

                            }
                                X=X-2;
                                    m=2*Y+2-(X+1)*(X+1);
                                        m=m/2;
                                            k=(X+1)/2;
                                                for(i=0;i<k;i++)
                                                    {
                                                            for(j=0;j<i;j++)
                                                                    {
                                                                                printf(" ");
                                                                                        }
                                                                                                for(p=0;p<X-2*i;p++)
                                                                                                        {
                                                                                                                    printf("%c",a);
                                                                                                                            }
                                                                                                                                    printf("\n");
                                                                                                                                        }
                                                                                                                                            for(i=i-2;i>=0;i--)
                                                                                                                                                {
                                                                                                                                                        for(j=0;j<i;j++)
                                                                                                                                                                {
                                                                                                                                                                            printf(" ");
                                                                                                                                                                                    }
                                                                                                                                                                                            for(p=0;p<X-2*j;p++)
                                                                                                                                                                                                    {
                                                                                                                                                                                                                printf("%c",a);
                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                printf("\n");
                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                        printf("%d",m);
                                                                                                                                                                                                                                            return 0;
                                                                                                                                                                                                                                            ｝
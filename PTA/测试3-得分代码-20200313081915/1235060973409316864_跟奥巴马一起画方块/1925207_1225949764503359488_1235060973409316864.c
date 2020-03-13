#include <stdio.h>
int main()
{
    int n;
    char c;
    while(scanf("%d %c",&n,&c)!=EOF)
    {
        int i,j;
        if(n%2==0)
        {
            for(j=0;j<n/2;j++)
            {
                    for(i=0;i<n;i++)
                    {
                    printf("%c",c);
                    }
                printf("\n");
            }
        }
        else{
         for(j=0;j<n/2+1;j++)
         {
            for(i=0;i<n;i++)
            {
            printf("%c",c);
            }
          printf("\n");
         }
 
 
        }
    }
    return 0;
}

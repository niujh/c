#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int N;
    char c;
    scanf("%d %c", &N, &c);
    if(N < 3 || N > 20)
    {
        printf("error\n");
        return 0;
    }

    int col = (int)(N / 2.0 + 0.5); //行数四舍五入
    for(i = 0; i < col; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(i == 0 || i == col - 1)
                printf("%c", c);
            else if(j == 0 || j == N - 1)
                printf("%c", c);
            else
                printf(" ");
        }
        if(i != col - 1)
            printf("\n");
    }
    return 0;
}

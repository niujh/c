#include<stdio.h>
int main()
{
    int n, m, i, j, k, need, space;
    char c;
    scanf("%d %c", &n, &c);
    if(n<=0)
        return 0;
    // 看看有几行
    m = n;
    i = 0;
    while(1)
    {
        i++;
        if(i==1)
        {
            need = 1;
        }
        else
        {
            need = (i * 2 - 1) * 2;
        }
        if(m>=need)
            m -= need;
        else
            break;
    }
	i--;
    // 打印
    // 沙漏上面
    space = -1;
    for(j=i; j; j--)
    {
        space++;
        for(k=space; k; k--)
            printf("%c", ' ');
        for(k=j*2-1; k; k--)
            printf("%c", c);
        printf("\n");
    }
    // 沙漏下面
    for(j=2; j<=i; j++)
    {
        space--;
        for(k=space; k; k--)
            printf("%c", ' ');
        space;
        for(k=0; k<j*2-1; k++)
            printf("%c", c);
        printf("\n");
    }
    printf("%d\n", m);
    return 0;
}
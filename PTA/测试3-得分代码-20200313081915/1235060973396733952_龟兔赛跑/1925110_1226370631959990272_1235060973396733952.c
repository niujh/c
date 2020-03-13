#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int rabbite = 0, i, t, flag = 1, k;
        scanf("%d", &t);
            for(i = 0; i < t; i++)
                {
                        if(i%10 == 0 && flag == 1)
                                {
                                            if(rabbite > 3 * i)
                                                        {
                                                                        flag = 0;
                                                                                        k = 30;
                                                                                                    }
                                                                                                            }
                                                                                                                    if(k == 0)
                                                                                                                                flag = 1;
                                                                                                                                        if(flag)
                                                                                                                                                    rabbite += 9;
                                                                                                                                                            else
                                                                                                                                                                        k--;
                                                                                                                                                                            }
                                                                                                                                                                                if(3 * t < rabbite)
                                                                                                                                                                                        printf("^_^ %d\n", rabbite);
                                                                                                                                                                                            else if(3 * t == rabbite)
                                                                                                                                                                                                    printf("-_- %d\n", rabbite);
                                                                                                                                                                                                        else
                                                                                                                                                                                                                printf("@_@ %d\n", 3 * t);
                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                    }
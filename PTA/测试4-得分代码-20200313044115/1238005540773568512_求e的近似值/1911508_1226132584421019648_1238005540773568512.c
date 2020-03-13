#include <stdio.h>

int factorial(int n)
{
    int factorial = 1;
        for (int i = 1; i <= n; i++) {
                factorial *=  i;
                    }
                        return factorial;
                        }
                        int main()
                        {
                            int n;
                                double sum = 1.0;
                                    scanf("%d", &n);
                                        for (int i = 1; i <= n; i++) {
                                                sum += 1.0 / factorial(i);
                                                        if (i == 11) {  //当n>=11时对于保留8位来说已经不变
                                                                    break;
                                                                            }
                                                                                }
                                                                                    //printf("%.9f\n", 1.0 / factorial(12) );           结果为0.000000002
                                                                                        printf("%.8f\n", sum);
                                                                                            return 0;
                                                                                            }
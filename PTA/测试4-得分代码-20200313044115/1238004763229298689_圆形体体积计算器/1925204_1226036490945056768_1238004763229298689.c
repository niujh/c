#include<stdio.h>
#define pi 3.1415926
double g(int n);
double f(int i,int j);
int main()
{
    int a,b,c;
        double d;
            double e;
                out:
                    printf("1-Ball\n");
                        printf("2-cylinder\n");
                            printf("3-cone\n");
                                printf("other-Exit");
                                    printf("Please enter your command:");
                                        scanf("%d",&a);
                                            switch(a) {
                                                case 1: {
                                                        printf("Please enter the radius:");
                                                                scanf("%d",&b);
                                                                        d=g(b);
                                                                                printf("%.2f\n",d);
                                                                                        goto out;
                                                                                            }
                                                                                                case 2: {
                                                                                                        printf("Please enter the radius and the height:");
                                                                                                                scanf("%d %d",&a,&b);
                                                                                                                        d=f(a,b);
                                                                                                                                printf("%.2f\n",d);
                                                                                                                                        goto out;
                                                                                                                                            }
                                                                                                                                                case 3: {
                                                                                                                                                        printf("Please enter the radius and the height:");
                                                                                                                                                                scanf("%d %d",&a,&b);
                                                                                                                                                                        d=f(a,b)/3;
                                                                                                                                                                                printf("%.2f\n",d);
                                                                                                                                                                                        goto out;
                                                                                                                                                                                            }
                                                                                                                                                                                                default:
                                                                                                                                                                                                        break;
                                                                                                                                                                                                            }
                                                                                                                                                                                                                return 0;
                                                                                                                                                                                                                }

                                                                                                                                                                                                                double g(int n)
                                                                                                                                                                                                                {
                                                                                                                                                                                                                    double x;
                                                                                                                                                                                                                        x=4*pi*(n*n*n)/3;
                                                                                                                                                                                                                              return x;
                                                                                                                                                                                                                              }

                                                                                                                                                                                                                              double f(int i,int j)
                                                                                                                                                                                                                              {
                                                                                                                                                                                                                                  double y;
                                                                                                                                                                                                                                      y=pi*(i*i)*j;
                                                                                                                                                                                                                                          return y;


                                                                                                                                                                                                                                          }
















                                                                                                                                                                                                                                          
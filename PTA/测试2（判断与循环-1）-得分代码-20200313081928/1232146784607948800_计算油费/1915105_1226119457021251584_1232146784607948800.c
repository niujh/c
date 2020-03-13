#include<stdio.h>
int main()
{
  int a,b;
    double sum;
      char c;
        scanf("%d%d %c",&a,&b,&c);//此处%d和%c之间要写一个空格
          switch(b)
            {
                case 90:
                    sum=6.95;
                        break;
                            case 93:
                                sum=7.44;
                                    break;
                                        case 97:
                                            sum=7.93;
                                                break;
                                                  }
                                                    if(c=='m')
                                                      printf("%.2f\n",0.95*sum*a);
                                                        else
                                                          printf("%.2f\n",sum*0.97*a);
                                                            return 0;
                                                            }

                                                            
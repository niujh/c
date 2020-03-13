#include <stdio.h>
int main()
{
    char a[10];
        int i;
            int letter=0;//英文字母 
                int blank=0;//空格
                    int digit=0;//数字
                        int other=0;
                            for(i=0;i<=9;i++)
                                {
                                        scanf("%c",&a[i]);
                                            }
                                                for(i=0;i<=9;i++)
                                                    {
                                                            if((a[i]>='a'||a[i]<='z')&&(a[i]>='A'||a[i]<='Z'))
                                                                    {
                                                                                letter++;
                                                                                        }
                                                                                                else if(a[i]==' '&&a[i]=='\n')
                                                                                                        {
                                                                                                                    blank++;
                                                                                                                            }
                                                                                                                                    else if(a[i]<=0||a[i<=9])
                                                                                                                                            {
                                                                                                                                                        digit++;
                                                                                                                                                                }
                                                                                                                                                                        else
                                                                                                                                                                                {
                                                                                                                                                                                            other= 10 - letter - digit - blank;
                                                                                                                                                                                                    }
                                                                                                                                                                                                            printf("letter = %c, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other);
                                                                                                                                                                                                                }
                                                                                                                                                                                                                    return 0;
                                                                                                                                                                                                                    }

#include<stdio.h>
int main()
{
    int a, A, B, C, D, E, i;
 
    scanf("%d",&a);
    if(a>=90)
        putchar('A');
    else if(a>=80&&a<90)
        putchar('B');
    else if(a>=70&&a<80)
        putchar('C');
    else if(a>=60&&a<70)
        putchar('D');
    else
        putchar('E');
     
    return 0;
}    



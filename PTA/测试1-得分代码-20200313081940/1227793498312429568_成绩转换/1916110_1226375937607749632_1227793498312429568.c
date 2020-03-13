#include <stdio.h>
int main()
{
	int c;
    scanf("%d",&c);
    if(c>=90&c<=100)
    printf("A");
    if(c>=80&c<90)
    printf("B");
    if(c>=70&c<80)
    printf("C");
    if(c>=60&c<70)
    printf("D");
    if(c>=0&c<60)
    printf("E");
    else
    return 0;
}
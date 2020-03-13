#include<stdio.h>
int main()
{
    int i,a=0;
    char n;
    scanf("%d %c",&i,&n);
    for(a=0;a<=(i/2);a++){
        printf("%c\n",i*n);
    }
    return 0;
}
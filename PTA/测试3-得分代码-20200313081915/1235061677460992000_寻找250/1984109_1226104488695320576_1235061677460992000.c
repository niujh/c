#include<stdio.h>
int main()
{
    char c;
    int a;
    scanf("%c",&c);
    for(a=1;;a++){
        if(c[a]=="250") break;
    }
    printf("%d",a);
    return 0;
}
#include<stdio.h>
int main()
{
    int i=0,k;
    char str[80];

    str[i]=getchar();
    while(str[i]!='\n'){
        str[i]=getchar();
    }
    for(k=i-1;k>=0;k--){
        printf("%c",str[k]);
    }
    return 0;
}
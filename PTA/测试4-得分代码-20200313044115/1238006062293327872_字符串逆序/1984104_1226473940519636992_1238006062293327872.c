#include <stdio.h>
int main(){
    char str[80];
    int i=0,k=0;
    while((str[i]=getchar())!='\n')
    i++;
    str[i]='\0';                                      //输入字符串
    for(k=i-1;k>=0;k--){
        printf("%c",str[k]);
    }                                                   //逆序输出
    return 0;
}

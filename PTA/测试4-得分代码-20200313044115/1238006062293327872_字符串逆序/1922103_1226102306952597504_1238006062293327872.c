#include<stdio.h>
#include<string.h>

int main(){
    char str[83];
    gets(str);
    //scanf("%[^\n]",str);
    int len=strlen(str);
    for(int i=len-1;i>=0;i--){//%[^\n]
        printf("%c",str[i]);
    }
    return 0;
}
#include<stdio.h>
#include<string.h>
void main(){
    char a[80];
    int i,j;
    gets(a);
    j=strlen(a);
    for(i=j-1;i>=0;i--){
        printf("%c",a[i]);
    }printf("\n");
}




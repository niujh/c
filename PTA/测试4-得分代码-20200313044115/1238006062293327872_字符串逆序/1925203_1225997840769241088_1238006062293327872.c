#include<stdio.h>
int main()
{
    int n=0;
    char r,a[80],b[80];
    r=getchar();
    for(int i=0;r!='\n';i++){
    a[i]=r;
    n++;
    }
    for(;n>=0;n--){
        b[n]=a[i];
    }
    printf("%c",b[n])


    









    return 0;
}
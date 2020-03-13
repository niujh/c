#include<stdio.h>
int main()
{
    int hang,i,j;
    float a;
    char b;
    scanf("%f %c",&a,&b);
    hang = (int)(a/2+0.5);
    for(i=1;i<=hang;i++){
        for(j=1;j<=a;j++){
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
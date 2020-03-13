#include<stdio.h>
int main(void)
{
    int hang,lie,i,j;
    char c;
    scanf("%d %c",&lie,&c);
    hang=(int)(lie*1.0/2+0.5);
    for(i=1;i<=hang;i++){
        for(j=1;j<=lie;j++){
            printf("%c",c);
        }
        printf("\n");
    }
    return 0;
}
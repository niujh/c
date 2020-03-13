#include<stdio.h>
int main(void)
{
    int score;
    char convert[]="EEEEEEDCBAA";

    while(scanf("%d,"&score)!=EOF){
        if(score＜0||score＞100)
            printf("score is error!\n");
        else
            printf("%c\n", convert [score/10]);   
             


    }
    return 0;
}
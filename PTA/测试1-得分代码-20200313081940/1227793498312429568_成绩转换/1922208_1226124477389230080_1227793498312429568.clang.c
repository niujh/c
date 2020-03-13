#include<stdio.h>
#include<math.h>
int main()
{
    int score;
    scanf("%d",&score);
    if(score>90){
        printf("A");
    }
    if(score>=80 & score<=90){
        printf("B");
    }
    if(score>=70 & score<=79){
        printf("C");
    }
    if(score>=60 & score<=69){
        printf("D");
    }
    if(score>=0 & score<=59){
        printf("E");
    } 
    return 0;
}

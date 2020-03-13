#include <stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i>=90){
        printf("A");
    }else if (90>i && i>=80){
        printf("B");
    }else if (80>i && i>=70){
        printf("C");
    }else if (70>i && i>=60){
        printf("D");
    }else if (i<60){
        printf("E");
    }
    return 0;
}

    


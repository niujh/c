#include <stdio.h>
#include <stdlib.h>
int main()
{
    int score, g;
    scanf("%d", &score);
    while (score < 0 || score > 100){
        printf("Error! Retry!\n");
        scanf("%d", &score);
    }
    g = score / 10;
    if (g >= 9)
        printf("A\n");
    switch(g){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5: printf("E\n"); break;
    case 6: printf("D\n"); break;
    case 7: printf("C\n"); break;
    case 8: printf("B\n"); break;
    }
    system("pause");
    return 0;
}
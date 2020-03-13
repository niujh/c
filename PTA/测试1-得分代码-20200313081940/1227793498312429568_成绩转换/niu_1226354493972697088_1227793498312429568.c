#include<stdio.h>

int main()
{
    int score;
    char c;
    scanf("%d", &score);

    switch(score / 10)
    {
        case 9:
        case 10:
            c = 'A'; break;
        case 8:
            c = 'B'; break;
        case 7:
            c = 'C'; break;
        case 6:
            c = 'D'; break;
        default:
            c = 'E';
    }
    printf("%c", c);

    return 0;
}
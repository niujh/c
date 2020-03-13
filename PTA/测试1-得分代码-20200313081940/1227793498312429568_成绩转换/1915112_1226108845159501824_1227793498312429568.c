#include <stdio.h>
int main()
{
    int score;
    char level;
    scanf("%d",&score);
    if(score>=0&&score<=100)
    {
        switch(score/10)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:level='E';break;
            case 6:level='D';break;
            case 7:level='C';break;
            case 8:level='B';break;
            case 9:
            case 10:level='A';break;
        }
    }
    printf("%c",level);
    return 0;
}
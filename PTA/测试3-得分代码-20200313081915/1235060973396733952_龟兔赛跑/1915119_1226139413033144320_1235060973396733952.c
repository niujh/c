#include <stdio.h>
int main() 
{
    int time = 0,endDis=0,circle=0;
    scanf("%d", &time);
    circle = 270 * (time / 90);
    if (time%45 == 0 || time%30 == 0) {
        printf("-_-");  
        endDis = time * 3;
    } 
    else if (time%90 < 30 || (time%90 < 60 && time%90 > 45)) {
        printf("^_^"); 
        if (time%90 < 10) { endDis = (time%90)*9 + circle; }
        else if (time%90 < 30) { endDis = 90 + circle; }
        else if (time%90 < 50) { endDis = (time%90 - 45)*9 + circle + 135; }
        else {
            endDis = circle + 180; 
        }
    } 
    else {
        printf("@_@");
        endDis = time * 3;
    }
    printf(" %d", endDis);
    return 0;
}
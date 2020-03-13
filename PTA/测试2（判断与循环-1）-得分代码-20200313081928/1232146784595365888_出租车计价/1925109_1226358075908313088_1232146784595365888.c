  #include <stdio.h>
int main()
{
    double mile=0;
    int time=0;
    int cost=0;
    scanf("%lf%d", &mile, &time);
    if(mile<=3)
        cost = (int)(10+time/5*2+0.5);
    else if(mile<=10)
        cost = (int)(10+(mile-3)*2+time/5*2+0.5);
    else
        cost = (int)(10+7*2+(mile-10)*3+time/5*2+0.5);
    printf("%d", cost);
    return 0;
}

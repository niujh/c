#include<stdio.h>
int main(void)
{
    int year,endyear;
    
    scanf("%d",&endyear);
    if(endyear>2100||endyear<=2000)
        printf("Invalid year!");
    else if(endyear<2004)
        printf("None");
    else{
        for(year=2001;year<=endyear;year++){
            if((year%4==0&&year%100!=0)||(year%400==0)){
                printf("%d\n",year);
            }
        }
    }
    return 0;
}
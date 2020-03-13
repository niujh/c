#include<stdio.h>
int main(void)
{
    int year,cnt = 0;
    scanf("%d",&year);
    if(year >= 2001 && year <=2100){
        for (int i = 2001;i <= year;i++){
            if (i%4 == 0 && i%100 != 0){
                printf("%d\n",i);
                cnt++;
            }
        }  
        if (cnt == 0)printf("None");
    }
    else printf("Invalid year!\n");
    return 0;
}
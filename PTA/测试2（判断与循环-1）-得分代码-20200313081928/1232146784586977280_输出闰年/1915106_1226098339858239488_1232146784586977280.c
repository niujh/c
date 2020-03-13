#include<stdio.h>
#include<math.h>
int main()
{
    int year,i;
    int count=0;
    scanf("%d",&year);
    if(year>2000&&year<=2100){
        for(i=2001;i<=year;i++){
            if((i%4==0&&i%100!=0)||(i%400==0)){
                printf("%d\n",i);
                count++;
            }
        }
        if(count==0){
            printf("None\n");
        }
    }else{
        printf("Invalid year!\n");
    }
    return 0;
}
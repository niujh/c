#include<stdio.h>
int main()
{
int y,i,s=0;
scanf("%d",&y);
if(y<=2000||y>2100)
    printf("Invalid year!\n");
else{
    for(i=2001;i<=y;i++){
    if(i%4==0&&i%100!=0||i%400==0){
        printf("%d\n",i);
           s++;
    }
}
if(s==0)
printf("None\n");
}

}





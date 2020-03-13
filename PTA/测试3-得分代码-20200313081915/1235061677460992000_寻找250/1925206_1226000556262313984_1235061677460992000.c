#include<stdio.h>
int main(){
    int num;
    int cnt=1,cnt2=0;
    int i=0;
    char gh;
    scanf("%d",&num);
    if(num==250){
        cnt2++;
    }
    while((gh=getchar())!='\n'){
        scanf("%d",&num);
        cnt++;
        if(num==250&&cnt2==0){
            i=cnt;
            cnt2++;
        }
    }
    printf("%d",i);
}
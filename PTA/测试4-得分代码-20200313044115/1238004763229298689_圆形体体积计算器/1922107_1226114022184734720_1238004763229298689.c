#include<stdio.h>
#include<math.h>
int main(){
    printf("1-Ball"/n"2-Cylinder"/n"3-Cone"/n"other-Exit"/n"Please enter your command:");
    int i;
    scanf("%d",&i);
    if(i=1){
        printf("Please enter the radius:");
        int a,s;
        scanf("%d",&a);
        s=(4/3)*pi*(a**3);
        printf("s")
    }
    else if(i=2){
        printf("Please enter the radius and the height:");
        int a,b,s;
        scanf("%d,%d",&a,&b);
        s=pi*(a**2)*b;
        printf("s");
    }
    else if(i=3){
        printf("Please enter the radius and the height:");
        int a,b,s;
        scanf("%d,%d",&a,&b);
        s=(1/3)*pi*(a**2)*b;
        printf("s");}
    return 0
}
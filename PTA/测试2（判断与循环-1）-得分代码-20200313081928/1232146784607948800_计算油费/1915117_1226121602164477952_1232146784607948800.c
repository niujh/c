# include<stdio.h>
int main()
{
    double price,r;
    int a,b;
    char c;
    scanf("%d %d %c",&a,&b,&c);
    switch(b){
        case 90:r=a*6.95;break;
        case 93:r=a*7.44;break;
        case 97:r=a*7.93;break;
    }
    if(c=='m'){
        price=r*0.95;
    }
    else{
        price=r*0.97;
    }
    printf("%.2f",price);
    return 0;
}
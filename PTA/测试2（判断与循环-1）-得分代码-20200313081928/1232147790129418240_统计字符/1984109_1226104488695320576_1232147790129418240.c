#include<stdio.h>

int main()

{
    int letter,blank,digit,other,i=0;
    char a[10];
    for(i = 0;i < 10;i++){
        scanf("%c",&a[i]);
        if((a[i]>='a'&&a[i]<='c')||(a[i]>='A'&&a[i]<='C')){
            letter++;
        }
        else if(a[i]==' ') {
            blank++;
        }
        else if(a[i]>=0&&a[i]<=9){
            digit++;
        }
        else{
            other++;
        }
    }
    printf("letter = %d,blank = %d,digit = %d,other = %d",letter,blank,digit,other);
    return 0;
}
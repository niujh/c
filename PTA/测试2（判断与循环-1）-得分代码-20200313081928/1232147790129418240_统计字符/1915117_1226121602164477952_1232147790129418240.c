#include<stdio.h>
int main()
{
    int letter=0,blank=0,digit=0,other=0,i=1;
    char ch;
    for(i=1;i<=10;i++){
        ch=getchar();
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')){
            letter++;
        }
        else if(ch>='0'&&ch<='9'){
            digit++;
        }
        else if(ch==' '||ch=='\n'){
            blank++;
        }
        else{
            other++;
        }
    }
    printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
    return 0;
} 
#include<stdio.h>

int main()
{
    int letter=0,digit=0,blank=0,other=0;
    int i;
    char ch;

    for(i=0;i<=9;i++){
        ch=getchar();
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')) 
               letter++;
        else if(ch>='0'&&ch<='9') 
               digit++;
        else if(ch==' '||ch=='\n') 
               blank++;
        else 
               other++;
    }
      ch=getchar();
     printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);

     return 0;
 } 
#include<stdio.h>

int main()
{
    char str[1024];
        int a=0,b=0,c=0,d=0,i;
            scanf("%s",str);
                for(i=0;str[i];i++){
                        if(str[i]== '\t' || str[i]== '\n'){
                                    b++;
                                            }
                                                    else if(( 'a' <=str[i] && str[i]<= 'z' ) || ('A'<=str[i] &&str[i]<='Z')){
                                                                a++;
                                                                            }
                                                                                    else if( 0 <=str[i] && str[i]<= 9 ){
                                                                                                c++;
                                                                                                            }
                                                                                                                    else{
                                                                                                                                d++;
                                                                                                                                            }
                                                                                                                                                }
                                                                                                                                                    printf("letter = %d, blank = %d, digit = %d, other = %d",a,b,c,d);
                                                                                                                                                        return 0;
                                                                                                                                                        }
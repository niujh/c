#include <stdio.h>
int main () {
    int rabbit=0,turtle=0,minute,rest=-1,run=10; 
    scanf ("%d",&minute) ; 
     while(minute--){
         turtle += 3;

        if (run-- > 0)

            rabbit += 9;

        if (run == 0 ){ 
            if (rabbit > turtle && rest != 0)  //兔子清醒状态下，快才休息  

                rest = 30;

            else 

                run = 10 ;
                }

        if (rest-- == 0)                    
            run = 10;

    }
    if(turtle > rabbit)

        printf("@_@ %d",turtle);

    else if (rabbit > turtle)
        printf("^_^ %d",rabbit);
    else 

        printf("-_- %d",rabbit);

 

    return 0 ;
}

          
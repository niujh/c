#include<stdio.h>
int main()
{
    int sb;
    for(sb = 1;; sb++)
    {
        if((sb % 5 == 1) && (sb % 6 == 5) && (sb % 7 == 4) && (sb % 11 == 10))
        {
            printf("%d\n", sb);
            return 0;
        }
    }
}    


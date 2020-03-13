#include <stdio.h>
int main()
{
    int A,B,C;
    scanf("%d %d",&A,&B);
    if(A<=100&&A>=-100&&B<=100&&B>=-100)
    C=A*B;
    printf("%d",C);
    return 0;
}
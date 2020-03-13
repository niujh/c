#include <stdio.h>

int main(void)
{
int m,N,ds,ss;
int i;
scanf("%d\n",&N);

ds=ss=0;
for(i=1;i<=N;i++){
    scanf("%d",&m);
    if(m%2==0){ss++;}
    else ds++;
}
printf("%d %d",ds,ss);

return 0;
}
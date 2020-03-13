#include<stdio.h>
int main()

{
int N,lie1;
char c;
scanf("%d %c",&N,&c);
int hang;
int lie;
lie=0;
hang=0;
if(N%2==0){
lie1=N/2;
}
else{
lie1=N/2+1;
}
for(lie=0;lie<lie1;lie++)
{
for(hang=0;hang<N;hang++)
{
putchar(c);
}
printf("\n");
}
return 0;
}
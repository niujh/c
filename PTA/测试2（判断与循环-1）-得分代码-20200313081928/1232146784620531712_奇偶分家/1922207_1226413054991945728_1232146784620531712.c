#include<stdio.h>
 #include<stdlib.h>
 int main() 
 {
    int i,x,y,N,M;
    x=0;
    y=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
    scanf("%d",&M);
    if(M%2!=0)
    x+=1;
 else
    y+=1; }
    printf("%d %d\n",x,y);
     system("pause");
     return 0; 
 }   

#include<stdio.h>
int main()
{
    int tu,gui,T;
    int t;
    int i;
    scanf("%d",&T);
   for(t=0;t<T;t++){
       gui=gui+3;
       tu=tu+9;
       if(t%10==0 && tu>=gui &&i==0){
           tu=tu-270;
           i++;
       }
   }
   if(tu>gui){
       printf("^_^ %d",tu);}
       else if(tu=gui){
           printf("-_- %d",tu);
       }
      
       else{
           printf("@_@ %d",gui);
       }
   

    return 0;
}
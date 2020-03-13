typedef enum{false,true}bool;
#include<stdio.h>
int main(){
int a=0,b=0,t=0,T,t1=0;
bool rest=false;
scanf("%d",&T);
while(t!=T){
    a+=3;
    if(!rest)
    {
        t1++;
        b+=9;
    } 
    t++;
    if(t1%10==0 && !rest) 
    {
        if(b>a)
        {rest=true;
        t1+=30;
        }
    }
    if(t==t1)
    {
        rest=false;
    }  
}
{if(a>b)
printf("@_@ %d",a);
else if(b>a)
printf("^_^ %d",b);
else
printf("-_- %d",a);
}
return 0;

}
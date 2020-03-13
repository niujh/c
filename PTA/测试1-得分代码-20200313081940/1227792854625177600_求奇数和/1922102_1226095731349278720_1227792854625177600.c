#include<stdio.h>  
#include<math.h>
int main()  
{  
  
    int i;
    int num, sum=0;  
    for(i=0; ;i++){  
        scanf("%d", &num);  
        if(num%2!=0)  
            sum+=num;  
        if((num==0||num<0)&&num%2!=0){  
            sum=sum-num;  
            break;  
        }  
        if((num==0||num<0)&&num%2==0)  
            break;  
    }  
    printf("%d", sum);  
    return 0;  
 }
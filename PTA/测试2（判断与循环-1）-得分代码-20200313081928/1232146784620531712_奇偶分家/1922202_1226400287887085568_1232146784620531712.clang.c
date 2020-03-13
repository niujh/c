#include <stdio.h>
 
int main(){
    int n,x;
    int odd=0,even=0;//奇数与偶数
    scanf("%d",&n);
    for(int i = 0;i < n;i++){
        scanf("%d",&x);
        if(x % 2 != 0){
            odd++;
        }else{
            even++;
        }
    }
    printf("%d %d",odd,even);
    return 0;
}

#include<stdio.h>
#include<stdbool.h>

int main(){
    int m,n;
    bool flag=false;
    scanf("%d %d",&m,&n);
    for(int i=m;i<=n;i++){
        int num=0;
        int sum=0;
        int a[5000]={0};
        for(int j=1;j<i;j++){
            if(i%j==0){
                sum+=j;
                a[num++]=j;
            }
        }
        if(sum==i){
            flag=true;
            printf("%d = ",i);
            for(int k=0;k<num;k++){
                printf("%d",a[k]);
                if(k!=num-1){
                    printf(" + ");
                }
            }
            printf("\n");
        }
    }
    if(flag==false){
        printf("None");
    }
    return 0;
}

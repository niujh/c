#include<stdio.h>

int main() 
{
	int m,n,i,k,j;
	int sum=0,cnt=0;
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++){
		for(k=1;k<i;k++){
		if(i%k==0){
			sum+=k;}
        if(sum==i){
	        printf("%d = 1",i);
	        for(j=2;j<i;j++){
		        if(i%j==0){
			        printf(" + %d",j);
		        }
	        }
			printf("\n");
			cnt++;
		}
	}
	}
	if(cnt==0){
		printf("None\n");
	}
    return 0;
}

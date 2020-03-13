 #include <stdio.h>
void print(int num)
{
    printf("%d = ",num);
    int i;

    for(i=1;i<num;i++){
        if(num%i==0) 
        {
            if(i==1)
            printf("1");
            else
            {
                printf(" + %d",i);  
            }   
        } 
    }
    printf("\n");
    return;
}

int main()
{
    int m,n;
    int flag=0;
    scanf("%d%d",&m,&n);
    int i,j;
    int sum=0; 
    for(i=m;i<=n;i++){
        sum=0;
        for(j=1;j<i;j++){
            if(i%j==0) sum+=j;
        }
        if(sum==i) {
            flag=1;
            print(i);
        }
    }
        if(flag==0) printf("None");
    return 0;
}

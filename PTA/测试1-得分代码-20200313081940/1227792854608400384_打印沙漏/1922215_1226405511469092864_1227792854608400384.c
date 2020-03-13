 #include<stdio.h>
int main(void)
{
    int n,i=1,sum=1;
    char c;
    scanf("%d %c",&n,&c);
    while(sum<=n)
    {
      sum+=2*(2*(i+1)-1);
      i++;
    }
    i=i-1;
    
    int j,k;
    for(j=0;j<i;j++)
    {
        for(k=0;k<j;k++)
        printf(" ");
        for(k=0;k<2*(i-j)-1;k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    
    for(j=2;j<=i;j++)
    {
        for(k=0;k<i-j;k++)
        printf(" ");
        for(k=0;k<2*j-1;k++)
        {
            printf("%c",c);
        }
        printf("\n");
    }
    printf("%d",n-(sum-(2*(2*(i+1)-1))));
    
    return 0;
}
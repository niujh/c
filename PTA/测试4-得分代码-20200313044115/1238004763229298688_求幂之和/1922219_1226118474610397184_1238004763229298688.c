
#include <stdio.h>
int power(int n);
int main(){
    int n,m,result;
    scanf("%d", &n);
m=1;
    result=0;
for(m=1;m<=n;m++)
{result=result+power(m);}
    printf("result = %d\n", result);
    return 0;
}

int power(int n)
{
    int pro = 1,i=0;
    
    {for(i=0;i<n;i++)
        pro = pro*2;
    
    }
    return pro;
}
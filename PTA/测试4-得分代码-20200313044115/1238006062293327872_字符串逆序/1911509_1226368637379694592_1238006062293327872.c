#include <stdio.h>
int n=80;
int main()
{    
    char a[n];    
    int x;    
    int i=-1;    
    while(a[i]!='\n')    
    {        
     i++;        
     scanf("%c",&a[i]);        
     x=i;    
    }    
     for(int j=x-1;j>=0;j--)    
    {        
     printf("%c",a[j]);    
    }    return 0;
}
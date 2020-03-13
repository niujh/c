#include<stdio.h>
int main()
{	
int i, j, n;	
char h, a[80], b[80];	
h=getchar();	
for(i=0; h!='\n'; i++){		
a[i]=h;		
n++;		
h=getchar();	
}	
for(i=0, j=n-1; i<n; i++, j--)			
b[j]=a[i];	
for(i=0; i<n; i++)		
printf("%c", b[i]);			
return 0;
}

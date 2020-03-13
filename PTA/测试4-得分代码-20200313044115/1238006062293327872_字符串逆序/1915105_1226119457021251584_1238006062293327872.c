#include<stdio.h>

#include<string.h>

main()

{char a[10];int i,j;

scanf("%s",a);

j=strlen(a);

for(i=j-1;i>=0;i--)

printf("%c",a[i]);

printf("\n");}
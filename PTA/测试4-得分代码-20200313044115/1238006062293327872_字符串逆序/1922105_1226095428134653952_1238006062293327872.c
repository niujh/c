#include<stdio.h>
int main()
{
    int i, m, s;
    char Z, a[80], b[80];
    Z=getchar();
    for(i=0; Z!='\n'; i++){
        a[i]=Z;
        s++;
        Z=getchar();
    }
    for(i=0, m=s-1; i<s; i++, m--)
            b[m]=a[i];
    for(i=0; i<s; i++)
        printf("%c", b[i]);
        
    return 0;
}
#include<stdio.h>
#include<math.h>
void print(char ch,int count){
    while (count-->0)putchar(ch);
}
int main()
{
    int n,ch,h,i;
    scanf("%d %c",&n,&ch);
    h=(int)sqrt((n+1)/2);
    for(i=1-h;i<h;i++){
        int j=abs(i);
        print(' ',h-1-j);
        print(ch,2*j+1);
        putchar('\n');
    }
    printf("%d",n-(2*h*h-1));
    return 0;
}
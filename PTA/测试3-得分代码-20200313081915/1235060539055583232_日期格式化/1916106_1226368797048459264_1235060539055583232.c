#include<stdio.h>
int main()
{
    int yue,ri,nian;
    scanf("%d-%d-%d",&yue,&ri,&nian);
    printf("%04d-%02d-%02d\n",nian,yue,ri);
    return 0;
}
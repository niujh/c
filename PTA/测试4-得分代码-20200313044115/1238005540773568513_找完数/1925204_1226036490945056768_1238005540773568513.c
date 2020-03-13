#include<stdio.h>
int main()
{
 int x=100;
  int s[x];
   int m,n,i,sum;
    int k=1;
     scanf("%d %d",&m,&n);
      for(i=m;i<=n;i++){
       for(int j=1;j<i;j++){
        if(i%j==0){
            s[k]=j;
                k++;}
                    for(k=k;k>=0;k--){
                          sum+=s[k];
                              }
                                  if(sum==i){
                                      printf("%d = 1 ",i);
                                          for(k=2;k<=j;k++){
                                               if(s[k])printf("+ %d ",s[k]);
                                                   }
                                                       printf("\n");
                                                           }
                                                               else printf("None");
                                                                   }
                                                                   }

                                                                    return 0;
                                                                    }
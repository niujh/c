int main()
{
  int hang,sum=-1,n,i,yu,b,k;char a;
  scanf("%d %c",&n,&a);


for(i=1;;i++)
{sum=sum+2*(2*i-1);
 if(n-sum<0)break;
 b=sum;
}
yu=n-b;
hang=i-1;

for(i=hang;i>0;i--)
{for(k=hang-i;k>0;k--)
printf(" ");
for(k=1;k<=2*i-1;k++)
printf("%c",a);
printf("\n");
}
for(i=2;i<=hang;i++)
{for(k=hang-i;k>0;k--)
 printf(" ");
 for(k=1;k<=2*i-1;k++)
 printf("%c",a);
 printf("\n");
}
printf("%d",yu);
return 0;
}


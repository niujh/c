int main(void)
{
   int n,wm,tm=0,i;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      wm=i*3;
      tm+=9;
      if(i%10==0 && tm>wm)
          i+=30;
    }
   wm=3*n;
   if(wm>tm)printf("@_@ %d",wm);
   else if (wm<tm) printf("^_^ %d",tm);
   else printf("-_- %d",tm);
   return 0;
}
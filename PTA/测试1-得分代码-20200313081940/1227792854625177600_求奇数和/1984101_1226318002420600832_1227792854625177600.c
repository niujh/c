int main()
{
 int t, s=0;
 scanf("%d",&t);
 while(t>0)
 {
  if(t%2==1)   
   s+=t;
  scanf("%d",&t);
 }
 printf("%d\n",s);
}
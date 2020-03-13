int main()
{
    int n,a,ct1,ct2,i;
    ct1=ct2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
     {
         scanf("%d",&a);
         if(a%2==1)
          ct1++;
          else
           ct2++;
     }
printf("%d %d\n",ct1,ct2);
return 0;
}
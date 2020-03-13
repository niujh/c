int main()
{
    int a[10000],i,q;
    for(i=0;i<=9999;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==250)
        {
            break;
        }
    }
    q=i+1;
    printf("%d",q);

}